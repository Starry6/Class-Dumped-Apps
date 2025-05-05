@interface IESECXBridgeMallGetFeedDataMethodParamModel : BDXBridgeModel
@property (nonatomic) NSNumber section;
@property (nonatomic) NSNumber index;
@property (nonatomic) NSNumber frontCount;
@property (nonatomic) NSNumber followingCount;
- (id)followingCount;
- (id)frontCount;
- (void)setFollowingCount:;
- (void)setFrontCount:;
- (void)setSection:;
- (id)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)section;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
