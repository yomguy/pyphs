/*
    Copyright or (c) or Copr. Project-Team S3 (Sound Signals and Systems) and
    Analysis/Synthesis team, Laboratory of Sciences and Technologies of Music and
    Sound (UMR 9912), IRCAM-CNRS-UPMC, 1 place Igor Stravinsky, F-75004 Paris
    * contributors : Antoine Falaize, Thomas Helie,
    * corresponding contributor: antoine.falaize@ircam.fr
    * date: 2016/12/31 12:47:34

    This has been geerated by PyPHS which purpose is to generate C++
    code for the simulation of multiphysics system described by graph structures.

    This software is governed by the CeCILL-B license under French law and
    abiding by the rules of distribution of free software.  You can  use,
    modify and/ or redistribute the software under the terms of the CeCILL-B
    license as circulated by CEA, CNRS and INRIA at the following URL
    "http://www.cecill.info".

    As a counterpart to the access to the source code and  rights to copy,
    modify and redistribute granted by the license, users are provided only
    with a limited warranty  and the software's author,  the holder of the
    economic rights, and the successive licensors  have only  limited liability.

    In this respect, the user's attention is drawn to the risks associated
    with loading,  using,  modifying and/or developing or reproducing the
    software by the user in light of its specific status of free software,
    that may mean  that it is complicated to manipulate,  and  that  also
    therefore means  that it is reserved for developers  and  experienced
    professionals having in-depth computer knowledge. Users are therefore
    encouraged to load and test the software's suitability as regards their
    requirements in conditions enabling the security of their systems and/or
    data to be ensured and,  more generally, to use and operate it in the
    same conditions as regards security.

    The fact that you are presently reading this means that you have had
    knowledge of the CeCILL-B license and that you accept its terms.

    Created on 2016/12/31 12:47:34

    author: Antoine Falaize


===========================================================================

    This file was automatically generated by PyPHS, date 2017/03/12 23:31:54.

    It contains the code for the simulation of system 'CORE'.

===========================================================================
*/


#ifndef CORE_H
#define CORE_H

#include "iostream"
#include "vector"
#include "math.h"

# include "data.h"

#include </Users/Falaize/Documents/DEV/c++/bibliotheques/eigen/Eigen/Dense>

using namespace std;
using namespace Eigen;

class CORE {

// PUBLIC    
    public:
    void update(vector<double> &, vector<double> &);
    
    // Acessors to Arguments, return vector<double>
    
    vector<double> x_vector() const;
    vector<double> xl_vector() const;
    vector<double> xnl_vector() const;
    vector<double> dx_vector() const;
    vector<double> dxl_vector() const;
    vector<double> dxnl_vector() const;
    vector<double> w_vector() const;
    vector<double> wl_vector() const;
    vector<double> wnl_vector() const;
    vector<double> u_vector() const;
    vector<double> p_vector() const;
    vector<double> v_vector() const;
    vector<double> vl_vector() const;
    vector<double> vnl_vector() const;
    
    // Acessors to Arguments, return Matrix<double, n, m>
    
    Matrix<double, 2, 1> x() const;
    Matrix<double, 0, 1> xl() const;
    Matrix<double, 2, 1> xnl() const;
    Matrix<double, 2, 1> dx() const;
    Matrix<double, 0, 1> dxl() const;
    Matrix<double, 2, 1> dxnl() const;
    Matrix<double, 3, 1> w() const;
    Matrix<double, 2, 1> wl() const;
    Matrix<double, 1, 1> wnl() const;
    Matrix<double, 1, 1> u() const;
    Matrix<double, 0, 1> p() const;
    Matrix<double, 5, 1> v() const;
    Matrix<double, 2, 1> vl() const;
    Matrix<double, 3, 1> vnl() const;
    
    // Mutators for Arguments, type = vector<double>
    
    void set_x(vector<double> &);
    void set_xl(vector<double> &);
    void set_xnl(vector<double> &);
    void set_dx(vector<double> &);
    void set_dxl(vector<double> &);
    void set_dxnl(vector<double> &);
    void set_w(vector<double> &);
    void set_wl(vector<double> &);
    void set_wnl(vector<double> &);
    void set_u(vector<double> &);
    void set_p(vector<double> &);
    void set_v(vector<double> &);
    void set_vl(vector<double> &);
    void set_vnl(vector<double> &);
    
    // Mutators for Arguments, type = Matrix<double, n, m>
    
    void set_x(Matrix<double, 2, 1> &);
    void set_xl(Matrix<double, 0, 1> &);
    void set_xnl(Matrix<double, 2, 1> &);
    void set_dx(Matrix<double, 2, 1> &);
    void set_dxl(Matrix<double, 0, 1> &);
    void set_dxnl(Matrix<double, 2, 1> &);
    void set_w(Matrix<double, 3, 1> &);
    void set_wl(Matrix<double, 2, 1> &);
    void set_wnl(Matrix<double, 1, 1> &);
    void set_u(Matrix<double, 1, 1> &);
    void set_p(Matrix<double, 0, 1> &);
    void set_v(Matrix<double, 5, 1> &);
    void set_vl(Matrix<double, 2, 1> &);
    void set_vnl(Matrix<double, 3, 1> &);
    
    // Functions Results Accessors
    
    Matrix<double, 3, 1> Mvnly() const;
    Matrix<double, 2, 3> jacGlnl() const;
    Matrix<double, 3, 1> fnl() const;
    Matrix<double, 2, 3> jacFlnl() const;
    Matrix<double, 5, 1> Mvy() const;
    Matrix<double, 3, 3> Mvnlvnl() const;
    Matrix<double, 2, 1> Mvly() const;
    Matrix<double, 2, 2> jacFll() const;
    Matrix<double, 5, 5> Mvv() const;
    Matrix<double, 2, 3> Mvlvnl() const;
    Matrix<double, 2, 2> Mvlvl() const;
    Matrix<double, 3, 2> jacGnll() const;
    Matrix<double, 2, 1> dxH() const;
    Matrix<double, 2, 2> jacGll() const;
    Matrix<double, 2, 1> Fl() const;
    Matrix<double, 3, 2> Mvnlvl() const;
    Matrix<double, 5, 1> G() const;
    Matrix<double, 5, 1> F() const;
    double H();
    Matrix<double, 3, 3> jacGnlnl() const;
    Matrix<double, 3, 2> jacFnll() const;
    Matrix<double, 0, 0> Q() const;
    Matrix<double, 3, 1> Fnl() const;
    Matrix<double, 2, 1> fl() const;
    Matrix<double, 3, 1> Gnl() const;
    Matrix<double, 2, 2> Zl() const;
    Matrix<double, 3, 1> z() const;
    Matrix<double, 0, 0> g() const;
    Matrix<double, 5, 1> f() const;
    Matrix<double, 5, 5> jacF() const;
    Matrix<double, 2, 1> Gl() const;
    Matrix<double, 3, 3> jacFnlnl() const;
    Matrix<double, 1, 1> y() const;
    double fs();
    
    // Functions Results Accessors
    
    vector<double> fnl_vector() const;
    vector<double> dxH_vector() const;
    vector<double> Fl_vector() const;
    vector<double> G_vector() const;
    vector<double> F_vector() const;
    vector<double> Q_vector() const;
    vector<double> Fnl_vector() const;
    vector<double> fl_vector() const;
    vector<double> Gnl_vector() const;
    vector<double> z_vector() const;
    vector<double> g_vector() const;
    vector<double> f_vector() const;
    vector<double> Gl_vector() const;
    vector<double> y_vector() const;
    
    // Oprations Results Accessors
    
    Matrix<double, 2, 1> ud_x() const;
    Matrix<double, 2, 2> ijacFll() const;
    Matrix<double, 2, 1> ud_vl() const;
    Matrix<double, 3, 1> save_Fnl() const;
    Matrix<double, 3, 1> ud_Fnl() const;
    Matrix<double, 3, 3> jacFnl() const;
    Matrix<double, 3, 3> ijacFnl() const;
    double res_Fnl() const;
    double step_Fnl() const;
    Matrix<double, 3, 1> ud_vnl() const;
    
    // Oprations Results Accessors
    
    vector<double> ud_x_vector() const;
    vector<double> ud_vl_vector() const;
    vector<double> save_Fnl_vector() const;
    vector<double> ud_Fnl_vector() const;
    vector<double> ud_vnl_vector() const;
    
    // Default Constructor
    
    CORE();
    
    // Constructor with vector state initalization
    
    CORE(vector<double> &);
    
    // Constructor with matrix state initalization
    
    CORE(Matrix<double, 2, 1> &);
    
    // Default Destructor
    
    ~CORE();


// PRIVATE    
    private:
    
    // Parameters
    
    const unsigned int subs_ref = 0;
    
    const double * Csymbol = & subs[subs_ref][0];
    const double * f_s = & subs[subs_ref][1];
    const double * v0 = & subs[subs_ref][2];
    const double * mu = & subs[subs_ref][3];
    const double * gmin = & subs[subs_ref][4];
    const double * Is = & subs[subs_ref][5];
    const double * Lsymbol = & subs[subs_ref][6];
    const double * Rd = & subs[subs_ref][7];
    
    // Arguments
    
    Matrix<double, 8, 1> args;
    
    double * xL = & args(0, 0);
    double * xC = & args(1, 0);
    double * dxL = & args(2, 0);
    double * dxC = & args(3, 0);
    double * wD_R = & args(4, 0);
    double * wD_gmin = & args(5, 0);
    double * wD = & args(6, 0);
    double * uIN = & args(7, 0);
    
    // Functions Results Definitions
    
    Matrix<double, 3, 1> _Mvnly;
    Matrix<double, 2, 3> _jacGlnl;
    Matrix<double, 3, 1> _fnl;
    Matrix<double, 2, 3> _jacFlnl;
    Matrix<double, 5, 1> _Mvy;
    Matrix<double, 3, 3> _Mvnlvnl;
    Matrix<double, 2, 1> _Mvly;
    Matrix<double, 2, 2> _jacFll;
    Matrix<double, 5, 5> _Mvv;
    Matrix<double, 2, 3> _Mvlvnl;
    Matrix<double, 2, 2> _Mvlvl;
    Matrix<double, 3, 2> _jacGnll;
    Matrix<double, 2, 1> _dxH;
    Matrix<double, 2, 2> _jacGll;
    Matrix<double, 2, 1> _Fl;
    Matrix<double, 3, 2> _Mvnlvl;
    Matrix<double, 5, 1> _G;
    Matrix<double, 5, 1> _F;
    double _H;
    Matrix<double, 3, 3> _jacGnlnl;
    Matrix<double, 3, 2> _jacFnll;
    Matrix<double, 0, 0> _Q;
    Matrix<double, 3, 1> _Fnl;
    Matrix<double, 2, 1> _fl;
    Matrix<double, 3, 1> _Gnl;
    Matrix<double, 2, 2> _Zl;
    Matrix<double, 3, 1> _z;
    Matrix<double, 0, 0> _g;
    Matrix<double, 5, 1> _f;
    Matrix<double, 5, 5> _jacF;
    Matrix<double, 2, 1> _Gl;
    Matrix<double, 3, 3> _jacFnlnl;
    Matrix<double, 1, 1> _y;
    double _fs;
    
    // Functions Results Updates
    
    void Mvnly_update();
    void jacGlnl_update();
    void fnl_update();
    void jacFlnl_update();
    void Mvy_update();
    void Mvnlvnl_update();
    void Mvly_update();
    void jacFll_update();
    void Mvv_update();
    void Mvlvnl_update();
    void Mvlvl_update();
    void jacGnll_update();
    void dxH_update();
    void jacGll_update();
    void Fl_update();
    void Mvnlvl_update();
    void G_update();
    void F_update();
    void H_update();
    void jacGnlnl_update();
    void jacFnll_update();
    void Q_update();
    void Fnl_update();
    void fl_update();
    void Gnl_update();
    void Zl_update();
    void z_update();
    void g_update();
    void f_update();
    void jacF_update();
    void Gl_update();
    void jacFnlnl_update();
    void y_update();
    void fs_update();
    
    // Operations Results Definition
    
    Matrix<double, 2, 1> _ud_x;
    Matrix<double, 2, 2> _ijacFll;
    Matrix<double, 2, 1> _ud_vl;
    Matrix<double, 3, 1> _save_Fnl;
    Matrix<double, 3, 1> _ud_Fnl;
    Matrix<double, 3, 3> _jacFnl;
    Matrix<double, 3, 3> _ijacFnl;
    double _res_Fnl;
    double _step_Fnl;
    Matrix<double, 3, 1> _ud_vnl;
    
    // Oprations Results Updates
    
    void ud_x_update();
    void ijacFll_update();
    void ud_vl_update();
    void save_Fnl_update();
    void ud_Fnl_update();
    void jacFnl_update();
    void ijacFnl_update();
    void res_Fnl_update();
    void step_Fnl_update();
    void ud_vnl_update();
    
    // Initialization
    
    void init();
};

#endif /* CORE_H */
