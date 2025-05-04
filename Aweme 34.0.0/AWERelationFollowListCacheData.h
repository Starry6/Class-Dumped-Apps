@interface AWERelationFollowListCacheData : MTLModel
@property (nonatomic) double cacheTime;
@property (nonatomic) NSString ownerId;
@property (nonatomic) NSArray followList;
@property (nonatomic) NSArray cleanList;
@property (nonatomic) q groupCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOwnerId:;
- (double)cacheTime;
- (void)setCacheTime:;
- (id)ownerId;
- (id)cleanList;
- (id)followList;
- (void)setCleanList:;
- (void)setFollowList:;
- (void).cxx_destruct;
- (long long)groupCount;
- (void)setGroupCount:;
+ (id)followListJSONTransformer;
+ (id)cleanListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
