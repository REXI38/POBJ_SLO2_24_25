using System;
using System.Windows.Forms;

/*
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
*/

namespace HelloWorld
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }
        private void btnTest_Click(object sender, EventArgs e)
        { 
            Console.WriteLine("******** Hello world ******")
        }
    }
}

/*namespace demoCsharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
        }
    }
}*/
