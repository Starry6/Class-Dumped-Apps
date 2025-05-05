@interface ActivityKit.ActivityAuthorization : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)areActivitiesEnabledForBundleId:;
- (BOOL)setActivitiesWithEnabled:forBundleId:error:;
- (BOOL)areFrequentPushesEnabledFor:;
- (BOOL)setFrequentPushesWithEnabled:for:error:;
@end
