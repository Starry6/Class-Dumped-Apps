@interface IESECAddressServiceMonitor : NSObject
+ (id)createTrackParams:;
+ (void)trackEcChangeAddressWithAddressItem:;
+ (void)trackEcGetAddressWithAddressItem:addressRes:;
+ (void)trackEcSetAddressWithAddressItem:;
+ (void)trackEvent:params:;
+ (void)trackWithCode:message:params:;
@end
