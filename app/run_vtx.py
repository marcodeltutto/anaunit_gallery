import ROOT
from ROOT import gallery, galleryfmwk, larutil

import sys


def process_file(_file):


    # Create ana_processor instance
    my_proc = galleryfmwk.ana_processor()

    # Set input root file
    myfile = open(_file, 'r') 
    for _f in myfile:
        my_proc.add_input_file(_f[:-1])

    #my_proc.add_input_file(_file)

    # Specify output root file name
    my_proc.set_ana_output_file("./vtx.root")
    # my_proc.set_output_file("")

    vtx = galleryfmwk.vtx()
    vtx.setvtxProducer("pandoraNu")
    vtx.setVerbose(False)
    
    # Attach an analysis unit ... here we use a base class which do
    my_proc.add_process(vtx)

    my_proc.run(10)

def main():


    if len(sys.argv) < 2:
        print "Error: must include an input file."
        exit()

    _file = sys.argv[-1]
    process_file(_file)


if __name__ == '__main__':
  main()
