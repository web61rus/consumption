Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure textBox1_KeyPress(sender: Object; e: KeyPressEventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    label1: &Label;
    textBox1: TextBox;
    button1: Button;
    label3: &Label;
    textBox2: TextBox;
    label2: &Label;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  var a:=textBox1.Text.ToReal;
  var b:=textBox2.Text.ToReal;
  label2.Text:='День: '+a*b*24/1000+' руб'+#13#10+'Месяц: '+a*b*24*30/1000+' руб';
end;

procedure Form1.textBox1_KeyPress(sender: Object; e: KeyPressEventArgs);
begin
  
end;

end.
