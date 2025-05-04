@interface AWEECOMIMDynamicCardEditAddressHandler : NSObject
+ (void)runWithDataModel:;
+ (void)innerEditAddressWithDataModel:;
+ (void)checkUpdateAddressWithDataModel:completion:;
+ (id)editAddressSubscriberWithDataModel:;
+ (void)onChooseAddress:dataModel:;
+ (void)unregisterListener;
@end
