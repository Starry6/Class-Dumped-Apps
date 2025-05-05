@interface VIAEventCache : NSObject
@property (nonatomic) <VIAnalyticsTestingDelegate> testingDelegate;
- (void)setTestingDelegate:;
- (void).cxx_destruct;
- (id)testingDelegate;
- (id)initWithQueue:;
- (void)cacheEvent:;
- (id)cachedEventForBundleID:queryID:;
- (id)_cachedEventsForBundleID:;
@end
