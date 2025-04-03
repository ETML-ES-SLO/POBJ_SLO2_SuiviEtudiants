using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DemoSlo1
{
    public partial class Form1 : Form
    {
        //-- variables entier --// 
        private byte compteur; 
        

        public Form1()
        {
            InitializeComponent();
            label_info1.Text = "info Entree";
            compteur = 0; 
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            BOUTON.BackColor = Color.Red; 

        }

        private void BOUTON_Click(object sender, EventArgs e)
        {
            BOUTON.BackColor = Color.Yellow;
            compteur += 5; 

        }
    }
}
