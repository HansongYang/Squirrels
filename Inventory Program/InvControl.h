/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Inventory System              */
/*  Author:   Christine Laurendeau                 */
/*  Date:     28-JUN-2016                          */
/*                                                 */
/*  (c) 2016 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef INVCONTROL_H
#define INVCONTROL_H
#include <cmath>
#include "Store.h"
#include "UI.h"

class InvControl
{
  public:
    InvControl();
    void launch(int, char*[]);  //purpose: launch this whole program
    bool checkCustomer(Store*, int*); //purpose: check a customer is valid or not
    bool checkProduct(Store*, int*, int*, float*, int*); //purpose: check a product is valid or not
    void addInventory(Store*, int*, int);  //purpose: add more units of an existing product
  private:
    Store     store;
    UI        view;
    void      initProducts();
    void      initCustomers();
    void      processAdmin();
    void      processCashier();
};
#endif