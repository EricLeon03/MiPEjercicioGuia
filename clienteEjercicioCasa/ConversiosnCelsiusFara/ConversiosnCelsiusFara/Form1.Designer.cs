namespace ConversiosnCelsiusFara
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.nombre = new System.Windows.Forms.TextBox();
            this.CelFa = new System.Windows.Forms.RadioButton();
            this.FaCel = new System.Windows.Forms.RadioButton();
            this.button2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(12, 145);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(650, 25);
            this.label2.TabIndex = 2;
            this.label2.Text = "Elige si quieres pasar de grados celsius a Fahrenheit o vicerversa:";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(12, 62);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(399, 25);
            this.label1.TabIndex = 3;
            this.label1.Text = "Escribe el numero que quieres convertir:";
            // 
            // nombre
            // 
            this.nombre.Location = new System.Drawing.Point(428, 68);
            this.nombre.Name = "nombre";
            this.nombre.Size = new System.Drawing.Size(164, 20);
            this.nombre.TabIndex = 4;
            // 
            // CelFa
            // 
            this.CelFa.AutoSize = true;
            this.CelFa.Location = new System.Drawing.Point(75, 197);
            this.CelFa.Name = "CelFa";
            this.CelFa.Size = new System.Drawing.Size(180, 17);
            this.CelFa.TabIndex = 9;
            this.CelFa.TabStop = true;
            this.CelFa.Text = "Convertir de Celsius a Fahrenheit";
            this.CelFa.UseVisualStyleBackColor = true;
            // 
            // FaCel
            // 
            this.FaCel.AutoSize = true;
            this.FaCel.Location = new System.Drawing.Point(75, 245);
            this.FaCel.Name = "FaCel";
            this.FaCel.Size = new System.Drawing.Size(180, 17);
            this.FaCel.TabIndex = 10;
            this.FaCel.TabStop = true;
            this.FaCel.Text = "Convertir de Fahrenheit a Celsius";
            this.FaCel.UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(327, 294);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(117, 47);
            this.button2.TabIndex = 11;
            this.button2.Text = "Enviar";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(690, 384);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.FaCel);
            this.Controls.Add(this.CelFa);
            this.Controls.Add(this.nombre);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.label2);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox nombre;
        private System.Windows.Forms.RadioButton CelFa;
        private System.Windows.Forms.RadioButton FaCel;
        private System.Windows.Forms.Button button2;
    }
}

