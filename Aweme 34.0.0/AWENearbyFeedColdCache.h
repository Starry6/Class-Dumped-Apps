@interface AWENearbyFeedColdCache : MTLModel
@property (nonatomic) AWENearbyFeedColdCacheToken token;
@property (nonatomic) AWEBaseApiModel response;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackCacheInvalid:;
- (id)initWithRsp:cityCode:;
- (BOOL)isCacheValid:timeoutInterval:needTrackReason:;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)setToken:;
- (id)token;
+ (id)JSONKeyPathsByPropertyKey;
@end
