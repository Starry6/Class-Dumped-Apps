@interface NSKVONotifying_BUAdSDKConfigurationMediation : BUAdSDKConfigurationMediation
- (void)setExtraData:;
- (void)setUserInfoForSegment:;
- (void)setExtraDeviceMap:;
- (void)setForbiddenIDFA:;
- (void)setForbiddenCAID:;
- (void)setLimitProgrammaticAds:;
- (void)setLimitPersonalAds:;
- (Class)class;
- (void)dealloc;
- (BOOL)_isKVOA;
@end
