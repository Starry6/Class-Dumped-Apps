@interface AWELiveCheckDataManagerServiceImpl : NSObject
@property (nonatomic) q pageIdentifier;
@property (nonatomic) NSMutableDictionary modelsDictionary;
@property (nonatomic) NSHashTable subscribers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)subscribeLiveCheckWithModels:viewIdentifier:pageIdentifier:;
- (void)checkPageIdentifier:;
- (void)addDictWithModels:viewIdentifier:;
- (id)mergeModels;
- (void)subscribeToLiveCheckWithMergedModels:;
- (id)modelsDictionary;
- (void)setModelsDictionary:;
- (id)init;
- (id)subscribers;
- (void).cxx_destruct;
- (void)addSubscriber:;
- (void)removeSubscriber:;
- (long long)pageIdentifier;
- (void)setPageIdentifier:;
- (void)setSubscribers:;
+ (id)serviceWithPageIdentifier:;
+ (id)sharedInstance;
@end
