#GUI
import Tkinter

Title = ("Verdana", 19)
Large_Font = ("Verdana", 12)


class simpleapp_tk(Tkinter.Tk):
    def __init__(self, parent):
        Tkinter.Tk.__init__(self, parent)
        self.labelVariable = Tkinter.StringVar()
        self.parent = parent
        self.initialize()

    def initialize(self):
        self.grid()

        label1 = Tkinter.Label(self, text="Disclaimer", font=Title)
        label1.grid(column=0, row=0)

        label2 = Tkinter.Label(self, text="")
        label2.grid(column=0, row=1, sticky='w')

        label3 = Tkinter.Label(self, text="1.    CGPA Calculator is for non-commercial use only.",
                               font=Large_Font)
        label3.grid(column=0, row=2, sticky='w')

        label4 = Tkinter.Label(self, text="")
        label4.grid(column=0, row=3, sticky='w')

        label5 = Tkinter.Label(self, text="2.    This is a mini IT project for the Foundation studies. "
                                          "We do not represent Multimedia University or Telekom Malaysia ",
                               font=Large_Font)
        label5.grid(column=0, row=4, sticky='w')

        label6 = Tkinter.Label(self, text="       (TM) Education Group.",
                               font=Large_Font)
        label6.grid(column=0, row=5, sticky='w')

        label7 = Tkinter.Label(self, text="")
        label7.grid(column=0, row=6, sticky='w')

        label8 = Tkinter.Label(self, text="3.    The GPA and CGPA are computed based on the lowest possible points "
                                          "for a grade, therefore your actual results are"
                               , font=Large_Font)
        label8.grid(column=0, row=7, sticky='w')

        label9 = Tkinter.Label(self, text="       expected to be the same or higher than the provisional GPA and CGPA, "
                                          "by not more than 10%.",
                               font=Large_Font)
        label9.grid(column=0, row=8, sticky='w')

        label10 = Tkinter.Label(self, text="")
        label10.grid(column=0, row=9, sticky='w')

        label11 = Tkinter.Label(self, text="4.    The provisional GPA and CGPA are for your own reference only, "
                                           "please do not utilise them for any official use, such",
                                font=Large_Font)
        label11.grid(column=0, row=10, sticky='w')

        label12 = Tkinter.Label(self,
                                text="       as scholarship application and course application. In order to get a "
                                     "copy of your actual results, you may want to ",
                                font=Large_Font)
        label12.grid(column=0, row=11, sticky='w')

        label13 = Tkinter.Label(self, text="       refer to the relevant division(s) for more information.",
                                font=Large_Font)
        label13.grid(column=0, row=12, sticky='w')

        label14 = Tkinter.Label(self, text="")
        label14.grid(column=0, row=13, sticky='w')

        label15 = Tkinter.Label(self, text="5.    We shall not be responsible or liable for any loss or damage or harm "
                                           "of any kind incurred as a result of the use of this",
                                font=Large_Font)
        label15.grid(column=0, row=14, sticky='w')

        label16 = Tkinter.Label(self, text="       program. We reserve the right to refuse use of the application "
                                           "to anyone for any reason at any time.",
                                font=Large_Font)
        label16.grid(column=0, row=15, sticky='w')

        label17 = Tkinter.Label(self, text="")
        label17.grid(column=0, row=16, sticky='w')

        label18 = Tkinter.Label(self, text="6.    The program should not be copied, distributed or modified, "
                                           "in any mean, without our knowledge and permission.",
                                font=Large_Font)
        label18.grid(column=0, row=17, sticky='w')

        label19 = Tkinter.Label(self, text="")
        label19.grid(column=0, row=18, sticky='w')

        label20 = Tkinter.Label(self, text="")
        label20.grid(column=0, row=19, sticky='w')

        label21 = Tkinter.Label(self, text="")
        label21.grid(column=0, row=20, sticky='w')

        button = Tkinter.Button(self, text=u"I Agree", command=self.OnButtonClick)
        button.grid(column=0, row=21, ipadx=80)
        button.focus_set()

    def OnButtonClick(self):
        self.destroy()


app = simpleapp_tk(None)
app.title('Disclaimer')
app.geometry("1035x530")
app.resizable(False, False)
app.mainloop()




#Program
import random
print (" -------------------------------------------------------------------------------")
print (" |                              CGPA CALCULATOR                                |")
print (" -------------------------------------------------------------------------------")
print (" ")
Counter = 1
T2_CreditHour = 0
T2_TempGPA = 0
E_Subject = []
E_Trimester = []

while Counter != 0:
    No_Subject = 0
    Counter2 = 1
    T_TempGPA = 0
    T_CreditHour = 0
    while No_Subject < 1:
        No_Subject = input("Please enter the number of subject(s) in this trimester : ")
        print (" ")
        if No_Subject < 1:
            print ("Error! The minimum number is 1.")
    while Counter2 <= No_Subject:
        Edit = 1
        C_Subject = 1
        while Edit == 1:
            while C_Subject != 0:
                C_Subject = 0
                
                print ("-----------------------------------------------------------")
                print ("| PMT0101     PEN0045     PPP0101     PDS0101     PSP0101 |")
                print ("| PMT0201     PEN0055     PMF0101     PCR0025     PSP0201 |")
                print ("| PMT0301     PEN0065     PCT0101     PBU0045             |")
                print ("-----------------------------------------------------------")
                print (" ")
                
                Subject = raw_input("Please key in the subject : ")
                print (" ")

                if Subject.islower():
                    Subject = Subject.upper()

                if Subject == "PCT0101":
                    CreditHour = 4
                elif Subject == "PEN0045":
                    CreditHour = 3
                elif Subject == "PMT0101":
                    CreditHour = 4
                elif Subject == "PSP0101":
                    CreditHour = 4
                elif Subject == "PBU0045":
                    CreditHour = 4
                elif Subject == "PDS0101":
                    CreditHour = 4
                elif Subject == "PEN0055":
                    CreditHour = 3
                elif Subject == "PMF0101":
                    CreditHour = 4
                elif Subject == "PMT0201":
                    CreditHour = 4
                elif Subject == "PPP0101":
                    CreditHour = 3
                elif Subject == "PCR0025":
                    CreditHour = 3
                elif Subject == "PEN0065":
                    CreditHour = 3
                elif Subject == "PMT0301":
                    CreditHour = 4
                elif Subject == "PSP0201":
                    CreditHour = 3
                else:
                    print ("Please key in the correct subject name.")
                    print (" ")
                    C_Subject = 1

            print ("------------------------")
            print ("| A+    B+    C+    D+ |")
            print ("| A     B     C     D  |")
            print ("| A-    B-    C-    F  |")
            print ("------------------------")
            print (" ")

            Grade = raw_input("Please key in the grade : ")
            print (" ")

            if Grade.islower():
                Grade = Grade.upper()

            if Grade == "A+":
                GradePoint = 4.00
            elif Grade == "A":
                GradePoint = 4.00
            elif Grade == "A-":
                GradePoint = 3.67
            elif Grade == "B+":
                GradePoint = 3.33
            elif Grade == "B":
                GradePoint = 3.00
            elif Grade == "B-":
                GradePoint = 2.67
            elif Grade == "C+":
                GradePoint = 2.33
            elif Grade == "C":
                GradePoint = 2.00
            elif Grade == "C-":
                GradePoint = 1.67
            elif Grade == "D+":
                GradePoint = 1.33
            elif Grade == "D":
                GradePoint = 1.00
            else:
                GradePoint = 0.00

            print ("---------------------------------")
            print "| Subject:", Subject, "    Grade:", Grade, "|"
            print ("---------------------------------")
            print (" ")

            AnsEdit = raw_input("Do you want to make changes to your input? Key in Y (Yes) or N (No) : ")
            print (" ")

            if AnsEdit.islower():
                AnsEdit = AnsEdit.upper()

            if AnsEdit == "Y":
                C_Subject = 1
                Edit = 1
            elif AnsEdit == "N":
                Edit = 0

        T_CreditHour = T_CreditHour + CreditHour
        TempGPA = GradePoint * CreditHour
        T_TempGPA = T_TempGPA + TempGPA
        T2_TempGPA = T2_TempGPA + TempGPA
        T2_CreditHour = T2_CreditHour + CreditHour
        E_Subject.append((Subject, CreditHour, GradePoint, TempGPA))
        Counter2 = Counter2 + 1

    GPA = T_TempGPA / T_CreditHour
    GPA = round(GPA, 2)
    CGPA = T2_TempGPA / T2_CreditHour
    CGPA = round(CGPA, 2)
    E_Trimester.append((GPA, T_CreditHour, T_TempGPA))

    AnsGPA = raw_input("Do you want to calculate your GPA? Key in Y (Yes) or other key (No) : ")
    print (" ")

    if AnsGPA.islower():
        AnsGPA = AnsGPA.upper()

    if AnsGPA == "Y":
        if GPA < 2.00:
            Random = random.randint(1, 2)
            if Random == 1:
                print ("Don't give up!")
            if Random == 2:
                print ("Believe in yourself!")
        elif GPA < 2.67:
            Random = random.randint(1, 2)
            if Random == 1:
                print ("Work harder!")
            if Random == 2:
                print ("You can do better!")
        elif GPA < 3.67:
            Random = random.randint(1, 2)
            if Random == 1:
                print ("Not bad!")
            if Random == 2:
                print ("Keep it up!")
        else:
            Random = random.randint(1, 2)
            if Random == 1:
                print ("Well done!")
            if Random == 2:
                print ("Excellent!")

        print "Your GPA is", GPA
        print (" ")

    AnsTrim = raw_input("Do you want to add new trimester? Key in Y (Yes) or other key (No) : ")
    print (" ")

    if AnsTrim.islower():
                AnsTrim = AnsTrim.upper()

    if AnsTrim == "Y":
        Counter = Counter + 1
    else:
        Counter = 0

AnsCGPA = raw_input("Do you want to calculate CGPA? Key in Y (Yes) or other key (No) : ")
print (" ")

if AnsCGPA.islower():
                AnsCGPA = AnsCGPA.upper()
if AnsCGPA == "Y":
    if CGPA < 2.00:
        Random = random.randint(1, 2)
        if Random == 1:
                print ("Don't give up!")
        if Random == 2:
                print ("Believe in yourself!")
    elif CGPA < 2.67:
        Random = random.randint(1, 2)
        if Random == 1:
                print ("Work harder!")
        if Random == 2:
                print ("You can do better!")
    elif CGPA < 3.67:
        Random = random.randint(1, 2)
        if Random == 1:
                print ("Not bad!")
        if Random == 2:
                print ("Keep it up!")
    else:
        Random = random.randint(1, 2)
        if Random == 1:
                print ("Well done!")
        if Random == 2:
                print ("Excellent!")
    print "Your CGPA is", CGPA
    print (" ")

print "Data saved, refer to Result.txt for your future reference"







#Write in txt file
OutputA = [i[0:3:1] for i in E_Subject]
Output2A = [j[0] for j in E_Trimester]
Sem = 1

Result = open("Result.txt", "w")
Result.write("Subject - CreditHour - GradePoint\n")
for OutputB in OutputA:
    Result.write("{0}\n".format(OutputB))
Result.write("\nGPA Score\n")
for Output2B in Output2A:
    Result.write("Trimester {0} : {1}\n".format(Sem, Output2B))
    Sem = Sem + 1
Result.write("\nCGPA = {0}".format(CGPA))
Result.close()







