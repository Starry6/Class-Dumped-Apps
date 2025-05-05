@interface SiriAnalyticsFeatureFlags : NSObject
@property (nonatomic) BOOL preprocessorEnabled;
@property (nonatomic) BOOL streamAccessVending;
- (BOOL)streamAccessVending;
- (BOOL)preprocessorEnabled;
@end
