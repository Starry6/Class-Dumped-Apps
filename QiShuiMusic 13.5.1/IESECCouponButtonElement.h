@interface IESECCouponButtonElement : MTLModel
@property (nonatomic) IESECTextWithIconElement prefix;
@property (nonatomic) IESECTextWithIconElement suffix;
@property (nonatomic) IESECRadiusConfig radius;
@property (nonatomic) NSString borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) IESECImageModel tagHeaderIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTagHeaderIcon:;
- (id)tagHeaderIcon;
- (void)setBorderColor:;
- (void)setRadius:;
- (id)borderColor;
- (id)radius;
- (id)suffix;
- (double)borderWidth;
- (void)setBorderWidth:;
- (void)setPrefix:;
- (id)prefix;
- (void).cxx_destruct;
- (void)setSuffix:;
+ (id)JSONKeyPathsByPropertyKey;
@end
