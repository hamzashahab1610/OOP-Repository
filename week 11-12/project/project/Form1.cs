using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.OleDb;

namespace project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        OleDbConnection con = new OleDbConnection("Provider=Microsoft.ACE.Oledb.12.0; Data Source= E:\\Hamza Documents\\NED\\FESE\\Semester 2\\OOP\\week 11-12\\project.accdb");
        OleDbDataAdapter adap = new OleDbDataAdapter("select * from student", "Provider=Microsoft.ACE.Oledb.12.0; Data Source= E:\\Hamza Documents\\NED\\FESE\\Semester 2\\OOP\\week 11-12\\project.accdb");
        DataSet ds = new DataSet("Student");

        private void displayData() 
        {
            ds = new DataSet();
            ds.Tables.Add("Student");
            adap.Fill(ds, "Student");
            dataGridView1.DataSource = ds.Tables["Student"];
        }

        private void clearData()
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            textBox4.Text = "";
            textBox5.Text = "";
        }
        
        private void Form1_Load(object sender, EventArgs e)
        {
            con.Open();
            adap.Fill(ds);

            textBox1.Text = ds.Tables[0].Rows[0]["ID"].ToString();
            textBox2.Text = ds.Tables[0].Rows[0]["Name"].ToString();
            textBox3.Text = ds.Tables[0].Rows[0]["Phone"].ToString();
            textBox4.Text = ds.Tables[0].Rows[0]["Address"].ToString();
            textBox5.Text = ds.Tables[0].Rows[0]["deptID"].ToString();

            displayData();
        }

        int counter = 0; 

        private void btn_Previous_Click(object sender, EventArgs e)
        {
            if (counter > 0)
            {
                counter = counter - 1;
                textBox1.Text = ds.Tables[0].Rows[counter]["ID"].ToString();
                textBox2.Text = ds.Tables[0].Rows[counter]["Name"].ToString();
                textBox3.Text = ds.Tables[0].Rows[counter]["Address"].ToString();
                textBox4.Text = ds.Tables[0].Rows[counter]["Phone"].ToString();
                textBox5.Text = ds.Tables[0].Rows[counter]["deptID"].ToString();
            }
            else
            {
                MessageBox.Show("You are already on the first record");
            }
        }

        private void btn_Next_Click(object sender, EventArgs e)
        {
            if (counter < ds.Tables[0].Rows.Count - 1)
            {
                counter = counter + 1;
                textBox1.Text = ds.Tables[0].Rows[counter]["ID"].ToString();
                textBox2.Text = ds.Tables[0].Rows[counter]["Name"].ToString();
                textBox3.Text = ds.Tables[0].Rows[counter]["Address"].ToString();
                textBox4.Text = ds.Tables[0].Rows[counter]["Phone"].ToString();
                textBox5.Text = ds.Tables[0].Rows[counter]["deptID"].ToString();
            }
            else
            {
                MessageBox.Show("You are already on the last record");
            }
        }

        private void btn_Insert_Click(object sender, EventArgs e)
        {
            OleDbCommand insert = new OleDbCommand("INSERT into Student(ID,Name,Address,Phone,deptID) values('" + textBox1.Text + "', '" + textBox2.Text + "', '" + textBox3.Text + "', '" + textBox4.Text + "', '" + textBox5.Text + "')",con);
            insert.ExecuteNonQuery();
            MessageBox.Show("One record has been added");
            displayData();
        }

        private void btn_Clear_Click(object sender, EventArgs e)
        {
            clearData();
        }

        private void btn_Delete_Click(object sender, EventArgs e)
        {
            OleDbCommand delete = new OleDbCommand("DELETE * FROM Student WHERE ID = '" + textBox1.Text + "'",con);
            delete.ExecuteNonQuery();
            MessageBox.Show("One record has been deleted");
            displayData();
        }

        private void btn_Update_Click(object sender, EventArgs e)
        {
            //OleDbCommand update = new OleDbCommand("UPDATE Student SET ID = '" + textBox1.Text + "', Name = '" + textBox2.Text + "', Address = '" + textBox3.Text + "',Phone = '" + textBox4.Text + "',deptID = '" + textBox5.Text + "' WHERE ID = '" + textBox1.Text + "' ", con);

            OleDbCommand com3 = new OleDbCommand("Update student set Name=@name,Address=@address,Phone=@phone,deptID=@deptid where ID=@id", con);
            com3.Parameters.AddWithValue("@name", textBox2.Text);
            com3.Parameters.AddWithValue("@address", textBox3.Text);
            com3.Parameters.AddWithValue("@phone", textBox4.Text);
            com3.Parameters.AddWithValue("@deptid", textBox5.Text);
            com3.Parameters.AddWithValue("@id", textBox1.Text);
            com3.ExecuteNonQuery();
            //update.ExecuteNonQuery();
            MessageBox.Show("One record has been updated");            
            displayData();
        }
    }
}
