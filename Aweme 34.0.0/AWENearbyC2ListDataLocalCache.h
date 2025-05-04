@interface AWENearbyC2ListDataLocalCache : MTLModel
@property (nonatomic) AWENearbyC2ListDataResponse nearbyFeedRsp;
@property (nonatomic) AWENearbyCacheToken cacheToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithNearbyFeedRsp:;
- (id)nearbyFeedRsp;
- (void)setNearbyFeedRsp:;
- (id)cacheToken;
- (void).cxx_destruct;
- (void)setCacheToken:;
+ (id)JSONKeyPathsByPropertyKey;
@end
