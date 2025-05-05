@interface BYAnalyticsEventRecommendedLocale : NSObject
@property (nonatomic) Q source;
@property (nonatomic) double durationOfWiFiScan;
@property (nonatomic) BOOL userVisitedLocalePane;
@property (nonatomic) BOOL userSawRecommendedLocale;
- (id)eventPayload;
- (unsigned long long)source;
- (void)setSource:;
- (id)initWithAnalyticsManager:;
- (double)durationOfWiFiScan;
- (void)setDurationOfWiFiScan:;
- (BOOL)userVisitedLocalePane;
- (void)setUserVisitedLocalePane:;
- (BOOL)userSawRecommendedLocale;
- (void)setUserSawRecommendedLocale:;
@end
