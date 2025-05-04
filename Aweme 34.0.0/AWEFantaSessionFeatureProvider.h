@interface AWEFantaSessionFeatureProvider : NSObject
@property (nonatomic) NSMutableArray sessionTimestampArray;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} sessionTimestampLock;
@property (nonatomic) double sessionTimeInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onApplicationWillEnterForeground:;
- (void)p_addObserver;
- (id)featureForKey:;
- (void)fantaFeatureUpdateWithKey:info:;
- (void)loadSessionFeatureProvider;
- (void)updateSessionTimestampArray;
- (void)addNewSessionTimestamp;
- (double)sessionTimeInterval;
- (id)sessionTimestampArray;
- (void)setSessionTimeInterval:;
- (void)setSessionTimestampArray:;
- (id)sessionTimestampLock;
- (void)setSessionTimestampLock:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)onApplicationDidEnterBackground:;
+ (id)sharedInstance;
@end
