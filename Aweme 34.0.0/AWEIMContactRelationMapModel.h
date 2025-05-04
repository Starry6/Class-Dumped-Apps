@interface AWEIMContactRelationMapModel : MTLModel
@property (nonatomic) q nextUpdateTimestamp;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) NSArray communityMaps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needUpdate;
- (void)setNeedUpdate:;
- (id)communityMaps;
- (long long)nextUpdateTimestamp;
- (void)setNextUpdateTimestamp:;
- (void)setCommunityMaps:;
- (void).cxx_destruct;
+ (id)communityMapsJSONTransformer;
+ (id)needUpdateMapsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
