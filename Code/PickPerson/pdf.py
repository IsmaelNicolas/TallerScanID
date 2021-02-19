from fpdf import FPDF

class PDF():
    
    def __init__(self):
        file = open("C:\\PickPerson\\Temp\\temp.txt")
        self.data = []
        for line in file:
            self.data.append(line)
        

    def makePDF(self):
        pdf = FPDF()
        pdf.add_page()
        pdf.set_font('Times','B',13)
        pdf.cell(0,15,"\t\t\t\tUNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE",align='C',ln=1)

        #Data
        pdf.set_font('Times','B',size=13)
        pdf.cell(0,10,"Datos de la persona: ",align='L',ln=1)
        pdf.set_font('Times',size=12.5)
        pdf.cell(0,0,"Nombre y apellido : " + self.data[0] +" " + self.data[1] ,align='L',ln=1)
        pdf.cell(0,10,"Edad : " + self.data[2] ,align='L',ln=1)
        pdf.cell(0,0,"Cedula : " + self.data[3] ,align='L',ln=2)

        #make file
        nameFile = str(self.data[0]).replace("\n"," ") + str(self.data[1]).replace("\n"," ")
        pdf.output("C:\\PickPerson\\PDFS\\"+nameFile +".pdf")

root = PDF()
root.makePDF()