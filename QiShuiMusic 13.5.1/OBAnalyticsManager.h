@interface OBAnalyticsManager : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) BOOL shouldStashMetrics;
- (void)commit;
- (id)init;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (void)addEvent:;
- (void)addEvent:withPayload:;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logPresentationOfPrivacySplashWithIdentifier:;
- (void)logPresentationOfPrivacyLinkWithIdentifier:;
- (void)logTapOnPrivacyLinkWithIdentifier:;
- (BOOL)shouldStashMetrics;
- (void)setShouldStashMetrics:;
+ (id)sharedManager;
@end
