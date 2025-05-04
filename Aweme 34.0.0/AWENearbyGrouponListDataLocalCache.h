@interface AWENearbyGrouponListDataLocalCache : MTLModel
@property (nonatomic) AWENearbyGrouponListDataResponse grouponFeedRsp;
@property (nonatomic) AWENearbyCacheToken cacheToken;
@property (nonatomic) q lynxContainerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)grouponFeedRsp;
- (id)initWithGrouponFeedRsp:;
- (void)setLynxContainerType:;
- (long long)lynxContainerType;
- (void)setGrouponFeedRsp:;
- (id)cacheToken;
- (void).cxx_destruct;
- (void)setCacheToken:;
+ (id)JSONKeyPathsByPropertyKey;
@end
