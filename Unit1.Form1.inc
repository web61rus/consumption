procedure InitializeComponent;
    begin
        self.label1 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.AutoSize := true;
        self.label1.Location := new System.Drawing.Point(12, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(162, 13);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Потребляемая мощность Вт/ч';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(12, 25);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(100, 20);
        self.textBox1.TabIndex := 1;
        self.textBox1.Text := '80';
        self.textBox1.KeyPress += textBox1_KeyPress;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 103);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(273, 23);
        self.button1.TabIndex := 2;
        self.button1.Text := 'Рассчитать';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(180, 9);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(108, 65);
        self.label2.TabIndex := 3;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(12, 51);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(100, 23);
        self.label3.TabIndex := 4;
        self.label3.Text := 'Тариф руб/Кв';
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(12, 77);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(100, 20);
        self.textBox2.TabIndex := 5;
        self.textBox2.Text := '3.5';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(297, 132);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
