@interface VCRateControllerManager : VCObject
- (id)init;
- (void)dealloc;
- (BOOL)registerRateSharingClient:forInterfaceType:;
- (void)updateShareProfileForInterfaceType:;
- (unsigned int)countRateControllersForInterfaceType:;
- (BOOL)deregisterRateSharingClient:;
+ (id)sharedInstance;
@end
