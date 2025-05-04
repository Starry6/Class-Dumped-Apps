@interface AWENearbyResourceLayoutConfig : MTLModel
@property (nonatomic) AWENearbyResourceSizeConfig widthConfig;
@property (nonatomic) AWENearbyResourceSizeConfig heightConfig;
@property (nonatomic) AWENearbyResourceMarginConfig marginConfig;
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
