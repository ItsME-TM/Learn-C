#include <cmath>

public:
		array<double, 2>^ monthly;
		array<double, 2>^ maturity;
		MyForm(void)
		{
			this->monthly = (gcnew cli::array<double, 2> { {0, 5.4}, { 1,5.91 }, { 2,6.37 }, { 3,6.58 }, { 4,6.75 }});
			this->maturity = (gcnew cli::array<double, 2> { {0, 5.5}, { 1,6.25 }, { 2,7 }, { 3,7.5}, { 4,8}});
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ str1 = textBox1 -> Text;
		double num1 = Convert :: ToDouble(str1);
		double num2 = comboBox1 -> SelectedIndex;
		double num3 = comboBox2 -> SelectedIndex;
		double num4, num5, num6;
		if (num3 == 0)
		{
			num4 = monthly[num2, 1];
			this->label5 -> Text = L"Interest Earned(Monthly):";
			num5 = num1 * num4 / (100 * 12);
			this->label7 -> Text = System::Convert::ToString(num4) + "%";
			this->label8 -> Text = System::Convert::ToString(num5) + "LKR";
			this->label9->Text = System::Convert::ToString(num1) + "LKR";
		}
		if (num3 == 1)
		{
			num4 = maturity[num2, 1];
			this->label5->Text = L"Interest Earned:";
			double n = num2 + 1;
			num5 = num1 * (pow((1 + num4 / 100), n) - 1);
			num6 = num1 + num5;
			this->label7->Text = System::Convert::ToString(num4) + "%";
			this->label8->Text = System::Convert::ToString(num5) + "LKR";
			this->label9->Text = System::Convert::ToString(num6) + "LKR";
		}