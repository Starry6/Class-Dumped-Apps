@interface UISApplicationState : NSObject
@property (nonatomic) BOOL _usesBackgroundNetwork;
@property (nonatomic) NSDate _nextWakeDate;
@property (nonatomic) @ badgeValue;
- (id)badgeValue;
- (id)init;
- (void)dealloc;
- (void)_setMinimumBackgroundFetchInterval:;
- (id)initWithBundleIdentifier:;
- (BOOL)_usesBackgroundNetwork;
- (id)initForCurrentApplication;
- (id)_nextWakeDate;
- (void)_setNextWakeDate:;
- (void)_setUsesBackgroundNetwork:;
- (void).cxx_destruct;
- (void)setBadgeValue:;
@end
