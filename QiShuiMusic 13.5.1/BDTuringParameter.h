@interface BDTuringParameter : NSObject
@property (nonatomic) NSDictionary parameter;
@property (nonatomic) q timestamp;
@property (nonatomic) NSMutableDictionary creators;
@property (nonatomic) NSString appID;
- (void)addCreator:;
- (id)creators;
- (id)currentParameter;
- (id)modelWithParameter:;
- (void)setCreators:;
- (void)updateCurrentParameter:;
- (id)init;
- (void)setAppID:;
- (void)setTimestamp:;
- (id)appID;
- (void).cxx_destruct;
- (long long)timestamp;
- (id)parameter;
- (void)setParameter:;
+ (id)sharedInstance;
@end
