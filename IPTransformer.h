#ifndef IPTransformer_h

#define IPTransformer_h
class IPTransformer {
  public :
    IPTransformer () {}
    /*
     * IPCheck
     * Check if this is a valid IPv4 Address
     * Input : char array with length
     * Return : If is valid, then true, if not, false
     */
    int IPCheck (char*, int);
    /*
     * IPRangeCheck
     * Check if this integer is in a valid IPv4 8-bit range
     * Input : int
     * Return : If is valid, then true, if not, false
     */
    int IPRangeCheck (int);
    /*
     * IPStrToInt
     * Transform IPv4 String to 4 Integer
     * Input : integer array begin addr. to store data (there should be 4 integer spaces), IP Address char array, and length
     * Return : no, but IP Address Integers are stored in the integer array
     */
    void IPStrToInt (int*, char*, int);
    /*
     * IPIntToStr
     * Transform IPv4 Integer to IPv4 Address String
     * Input : char array begin addr. to store data (there should be at most 16 char spaces), integer array (4 indexes) to get addr from
     * Return : no, but IP Address String is stored to this char array
     */
    void IPIntToStr (char*, int*);
  private :
    int i;
};
#endif
