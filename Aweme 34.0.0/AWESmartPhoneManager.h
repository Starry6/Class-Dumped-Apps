@interface AWESmartPhoneManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)callNormalPhoneWithConfig:;
- (void)fetchVirtualNumberWithConfig:completion:;
- (void)callMultiplePhoneWithSmartPhoneModels:;
- (void)callMultiplePhoneWithSmartPhoneModels:isNeedHideEmptyActionSheet:;
- (void)callMultiplePhoneWithSmartPhoneModels:isNeedHideEmptyActionSheet:shouldSkipSheetView:;
- (void)callSmartPhoneWithConfig:;
- (id)smartPhoneHostURL;
- (void)smartPhoneOpenURL:;
- (id)paramsFromConfig:;
- (void)directCallWithSmartPhoneModel:;
- (void)callWithSecretNumber:phoneNumber:;
- (void)notifyPhoneCallDismiss;
- (void)callPrivacyPhoneNumber:;
@end
