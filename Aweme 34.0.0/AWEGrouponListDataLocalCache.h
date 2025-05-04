@interface AWEGrouponListDataLocalCache : MTLModel
@property (nonatomic) AWEGrouponListDataResponse grouponFeedRsp;
@property (nonatomic) AWEGrouponCacheToken cacheToken;
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
