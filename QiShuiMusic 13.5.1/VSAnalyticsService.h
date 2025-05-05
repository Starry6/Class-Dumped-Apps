@interface VSAnalyticsService : VSServiceListener
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)recordFederatedPunchoutEventWithError:metadata:;
- (void)recordNowPlayingBrokenEventWithBundleID:;
@end
