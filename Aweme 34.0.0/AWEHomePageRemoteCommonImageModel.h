@interface AWEHomePageRemoteCommonImageModel : MTLModel
@property (nonatomic) NSString lightImageUrl;
@property (nonatomic) NSString darkImageUrl;
@property (nonatomic) UIImage lightImage;
@property (nonatomic) UIImage darkImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDarkImageUrl:;
- (id)darkImageUrl;
- (id)lightImageUrl;
- (void)setLightImageUrl:;
- (id)lightImage;
- (void)setLightImage:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setDarkImage:;
- (id)darkImage;
- (BOOL)isModelValid;
+ (id)JSONKeyPathsByPropertyKey;
@end
