@interface UISApplicationStateClient : NSObject
@property (nonatomic) NSString badgeValue;
@property (nonatomic) BOOL usesBackgroundNetwork;
@property (nonatomic) double nextWakeIntervalSinceReferenceDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)badgeValue;
- (void)dealloc;
- (id)initWithBundleIdentifier:;
- (BOOL)usesBackgroundNetwork;
- (id)_remoteTarget;
- (void)setUsesBackgroundNetwork:;
- (void)setMinimumBackgroundFetchInterval:;
- (void).cxx_destruct;
- (void)setBadgeValue:;
- (double)nextWakeIntervalSinceReferenceDate;
- (void)setNextWakeIntervalSinceReferenceDate:;
- (void)invalidate;
@end
