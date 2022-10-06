#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, l, up, dn, lup, ldn, rup, rdn, n, k, rq, cq, ro, co;
    cin>>n>>k>>rq>>cq;
    r = n-cq; 
    l = cq-1;
    up = n-rq;
    dn = rq-1;
    lup = (l<up)? l:up;
    ldn = (l<dn)? l:dn;
    rup = (r<up)? r:up;
    rdn = (r<dn)? r:dn;

    for(int i=0; i<k; i++)
    {
        cin>>ro>>co;
        if(rq==ro && cq>co)
        {
            if(cq-co-1<l)
                l=cq-co-1;
        }
        else if(rq==ro && cq<co)
        {
            if(co-cq-1<r)
                r=co-cq-1;
        }
        else if(cq==co && rq<ro)
        {
            if(ro-rq-1<up)
                up = ro-rq-1;
        }
        else if(cq==co && rq>ro)
        {
            if(rq-ro-1<dn)
                dn = rq-ro-1;
        }
        else if(co<cq && ro>rq)
        {
            if((cq-co)==(ro-rq))
            {
                if(ro-rq-1<lup)
                    lup=ro-rq-1;
            }
        }
        else if(co<cq && ro<rq)
        {
            if((cq-co)==(rq-ro))
            {
                if(cq-co-1<ldn)
                    ldn=cq-co-1;
            }
        }
        else if(co>cq && ro<rq)
        {
            if((co-cq)==(rq-ro))
            {
                if(co-cq-1<rdn)
                    rdn=co-cq-1;
            }
        }
        else if(co>cq && ro>rq)
        {
            if((co-cq)==(ro-rq))
            {
                if(ro-rq-1<rup)
                    rup=ro-rq-1;
            }
        }
     }
     int total = r + l + up + dn + lup + ldn + rup + rdn;
    cout<<total;
    return 0;
}