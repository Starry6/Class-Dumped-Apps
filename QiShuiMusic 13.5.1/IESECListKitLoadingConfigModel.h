@interface IESECListKitLoadingConfigModel : MTLModel
@property (nonatomic) UIColor loadingColor;
@property (nonatomic) BOOL useCustomColor;
@property (nonatomic) double customCornerRadius;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUseCustomColor:;
- (BOOL)useCustomColor;
- (void).cxx_destruct;
- (id)loadingColor;
- (void)setLoadingColor:;
- (double)customCornerRadius;
- (void)setCustomCornerRadius:;
+ (id)loadingColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
