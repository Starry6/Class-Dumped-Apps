@interface AWEECommerceEcomButtonModel : AWEBaseApiModel
@property (nonatomic) NSString schema;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) q animationDelay;
@property (nonatomic) NSArray initialAreas;
@property (nonatomic) NSArray finalAreas;
- (id)initialAreas;
- (void)setInitialAreas:;
- (id)finalAreas;
- (void)setFinalAreas:;
- (id)schema;
- (void)setSchema:;
- (void)setHeight:;
- (void)setWidth:;
- (long long)width;
- (id)backgroundColor;
- (long long)animationDelay;
- (void)setBackgroundColor:;
- (void)setAnimationDelay:;
- (void).cxx_destruct;
- (long long)height;
+ (id)initialAreasJSONTransformer;
+ (id)finalAreasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
