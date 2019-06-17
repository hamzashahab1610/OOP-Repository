using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.OleDb;

namespace lab_11_12
{
    public partial class Form1 : Form
    {
        OleDbConnection con = new OleDbConnection(@"Provider = Microsoft.ACE.OLEDB.12.0;Data Source = E:\Hamza Documents\NED\FESE\Semester 2\OOP\week 11-12\project.accdb");
        OleDbCommand cmd = new OleDbCommand();
        OleDbConnection cn = new OleDbConnection();
        OleDbDataReader dr;
        OleDbDataAdapter da = new OleDbDataAdapter("SELECT * from Student", @"Provider = Microsoft.ACE.OLEDB.12.0;Data Source = E:\Hamza Documents\NED\FESE\Semester 2\OOP\week 11-12\project.accdb");
        DataTable dt = new DataTable("Student");

        public Form1()
        {
            InitializeComponent();
        }


        private void Form1_Load(object sender, EventArgs e)
        {
            con.Open();
            da.Fill(dt);
            textBox1.Text = dt.Rows[0]["ID"].ToString();
            textBox2.Text = dt.Rows[0]["Name"].ToString();
            textBox3.Text = dt.Rows[0]["Address"].ToString();
            textBox5.Text = dt.Rows[0]["Phone"].ToString();
            textBox6.Text = dt.Rows[0]["deptID"].ToString();
            dataGridView1.DataSource = dt;
        }

        //Display Data in DataGridView  
        private void DisplayData()
        {
            DataTable dt = new DataTable();
            da = new OleDbDataAdapter("select * from student", con);
            da.Fill(dt);
            dataGridView1.DataSource = dt;
        }
        //Clear Data  
        private void ClearData()
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            textBox5.Text = "";
            textBox6.Text = "";
        }  

        int counter = 0;

        private void btn_previous_Click(object sender, EventArgs e)
        {
            if (counter > 0)
            {
                counter = counter - 1;
                textBox1.Text = dt.Rows[counter]["ID"].ToString();
                textBox2.Text = dt.Rows[counter]["Name"].ToString();
                textBox3.Text = dt.Rows[counter]["Address"].ToString();
                textBox5.Text = dt.Rows[counter]["Phone"].ToString();
                textBox6.Text = dt.Rows[counter]["deptID"].ToString();
            }
            else
            {
                MessageBox.Show("You are already on the first record");
            }

        }

        private void btn_next_Click(object sender, EventArgs e)
        {
            if (counter < dt.Rows.Count - 1)
            {
                counter = counter + 1;
                textBox1.Text = dt.Rows[counter]["ID"].ToString();
                textBox2.Text = dt.Rows[counter]["Name"].ToString();
                textBox3.Text = dt.Rows[counter]["Address"].ToString();
                textBox5.Text = dt.Rows[counter]["Phone"].ToString();
                textBox6.Text = dt.Rows[counter]["deptID"].ToString();                
            }
            else
            {
                MessageBox.Show("You are already on the last record");
            }
        }

        private void btn_ins_Click(object sender, EventArgs e)
        {
            OleDbCommand com1 = new OleDbCommand("Insert into student(ID,Name,Address,Phone,deptID) values(@id,@name,@address,@phone,@deptid)", con);
            com1.Parameters.AddWithValue("@id", textBox1.Text);
            com1.Parameters.AddWithValue("@name", textBox2.Text);
            com1.Parameters.AddWithValue("@address", textBox3.Text);
            com1.Parameters.AddWithValue("@phone", textBox5.Text);
            com1.Parameters.AddWithValue("@deptid", textBox6.Text);
            com1.ExecuteNonQuery();
            MessageBox.Show("One record has been added");
            DisplayData();
        }

        private void btn_del_Click(object sender, EventArgs e)
        {
            OleDbCommand com2 = new OleDbCommand("Delete from student where ID = @id", con);
            com2.Parameters.AddWithValue("@id",textBox1.Text);
            com2.ExecuteNonQuery();
            MessageBox.Show("One record has been deleted");
            DisplayData();
        }

        private void btn_Clear_Click(object sender, EventArgs e)
        {
            ClearData();
        }

        private void btn_upd_Click(object sender, EventArgs e)
        {
            OleDbCommand com3 = new OleDbCommand("Update student set ID=@id,Name=@name,Address=@address,Phone=@phone,deptID=@deptid", con);
            com3.Parameters.AddWithValue("@id", textBox1.Text);
            com3.Parameters.AddWithValue("@name", textBox2.Text);
            com3.Parameters.AddWithValue("@address", textBox3.Text);
            com3.Parameters.AddWithValue("@phone", textBox5.Text);
            com3.Parameters.AddWithValue("@deptid", textBox6.Text);
            com3.ExecuteNonQuery();
            MessageBox.Show("One record has been updated");
            DisplayData();
        }


    }
}
