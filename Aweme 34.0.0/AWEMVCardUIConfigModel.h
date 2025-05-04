@interface AWEMVCardUIConfigModel : MTLModel
@property (nonatomic) AWEMVCardElementUIConfigModel normalSmallCardConfig;
@property (nonatomic) AWEMVCardElementUIConfigModel normalLargeCardConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)normalLargeCardConfig;
- (id)normalSmallCardConfig;
- (void)setNormalSmallCardConfig:;
- (void)setNormalLargeCardConfig:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
