#ifndef IPTransformer_h

#define IPTransformer_h
class IPTransformer {
  public :
    IPTransformer () {}
    /*
     * IPCheck
     * Check if this is a valid IPv4 Address
     * Input : char array, which ending character must be '\0'
     * Return : If is valid, then true (or 1), if not, false (or 0)
     */
    int IPCheck (char*);
    /*
     * IPRangeCheck
     * Check if this integer is in a valid IPv4 8-bit range
     * Input : integer
     * Return : If is valid, then true (or 1), if not, false (or 0)
     */
    int IPRangeCheck (int);
    /*
     * IPStrToInt
     * Transform IPv4 String to 4 Integers
     * Input : integer array begin addr. to store data (there should be 4 integer spaces), IP Address char array, which ending character must be '\0'
     * Return : no, but IP Address Integers are stored in the integer array
     */
    void IPStrToInt (int*, char*);
    /*
     * IPIntToStr
     * Transform IPv4 Integer to IPv4 Address String
     * Input : char array begin addr. to store data (there should be at most 16 char spaces), integer array (4 indexes) to get addr from
     * Return : no, but IP Address String is stored to this char array
     */
    void IPIntToStr (char*, int*);
  private :
    int i, count, check, tmp;
};
#endif
