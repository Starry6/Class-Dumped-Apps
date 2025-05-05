@interface MX_TelephonyClient : NSObject
- (id)init;
- (void)dealloc;
- (id)copyIsoCountryCodeForMCC;
- (BOOL)getIsInHomeCountry;
- (id)copyCountryNameFromOperatorCountryBundle;
@end
