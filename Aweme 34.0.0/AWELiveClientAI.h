@interface AWELiveClientAI : NSObject
@property (nonatomic) NSMutableDictionary liveFeatureDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getIndexInnerFeatureWithFollow;
- (id)provideCustomFeatureForModel:inFeedScene:;
- (id)provideFeatureForModel:inFeedScene:;
- (id)liveFeatureDict;
- (void)setLiveFeatureDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
