@interface AWESearchMerchandiseMainPictureRegion : AWEBaseApiModel
@property (nonatomic) NSArray iconTagElementList;
@property (nonatomic) NSNumber onlyServerIcon;
@property (nonatomic) AWESearchMerchandiseMainPictureRegionAnimation animation;
- (id)iconTagElementList;
- (void)setIconTagElementList:;
- (id)onlyServerIcon;
- (void)setOnlyServerIcon:;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:;
+ (id)iconTagElementListJSONTransformer;
+ (id)animationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
