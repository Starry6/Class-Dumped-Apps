@interface IESECBackgroundDescribeInfo : MTLModel
@property (nonatomic) IESECGradientInfo gradientInfo;
@property (nonatomic) IESECRadiusConfig radius;
@property (nonatomic) IESECPaddingConfig padding;
@property (nonatomic) IESECBorderConfig border;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) IESECImageModel backgroundImage;
@property (nonatomic) NSString maskColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gradientInfo;
- (void)setGradientInfo:;
- (void)setRadius:;
- (void)setBackgroundColor:;
- (id)border;
- (id)backgroundColor;
- (id)radius;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (void)setPadding:;
- (void).cxx_destruct;
- (void)setBorder:;
- (id)padding;
- (void)setMaskColor:;
- (id)maskColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
