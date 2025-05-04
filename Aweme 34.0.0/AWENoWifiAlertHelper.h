@interface AWENoWifiAlertHelper : NSObject
- (BOOL)shouldNotShowNoWifiAlertUseNewStrategy;
- (id)freeFlowCardURL;
- (id)telecomCarrier;
- (void)trackEventNoWifiByteFreeWithPageStyle:referString:;
- (void)trackEventNoWifiCancelWithPageStyle:referString:;
- (void)trackEventNoWifiContinueWithPageStyle:referString:;
- (void)trackEventEnterPhoneCardApply:;
- (void)trackEventByteFree:;
- (void)trackEventWifiByteFree:;
- (void)trackEventWifiContinue:;
- (void)trackEventWifiAlert:;
- (void)trackEventNoWifiAlertWithPageStyle:referString:;
+ (id)sharedInstance;
@end
