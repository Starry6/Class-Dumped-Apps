@interface AWEGrouponResourceLayoutConfig : MTLModel
@property (nonatomic) AWEGrouponResourceSizeConfig widthConfig;
@property (nonatomic) AWEGrouponResourceSizeConfig heightConfig;
@property (nonatomic) AWEGrouponResourceMarginConfig marginConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)marginConfig;
- (void)setMarginConfig:;
- (id)widthConfig;
- (void)setWidthConfig:;
- (id)heightConfig;
- (void)setHeightConfig:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
