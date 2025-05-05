@interface ABUTestToolManager : ABUSingleton
- (void)adLoadFailedWithConfigError;
- (void)adnDidFillErrorWithAdnName:andSlotID:error:;
- (void)adnDidFillSuccessWithAdnName:andSlotID:;
- (void)adnDidShowSuccessWithAdnName:andSlotID:;
+ (id)defaultManager;
@end
