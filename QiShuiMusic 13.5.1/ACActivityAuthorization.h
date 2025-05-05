@interface ACActivityAuthorization : NSObject
@property (nonatomic) _TtC11ActivityKit21ActivityAuthorization activityAuthorization;
- (id)init;
- (void).cxx_destruct;
- (BOOL)areActivitiesEnabledForBundleId:;
- (void)setActivitiesEnabled:forBundleId:;
- (BOOL)areFrequentPushesEnabledForBundleId:;
- (void)setFrequentPushesEnabled:forBundleId:;
- (id)activityAuthorization;
- (void)setActivityAuthorization:;
@end
