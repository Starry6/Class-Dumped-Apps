@interface AWEGrouponPageInitInfo : AWEBaseApiModel
@property (nonatomic) NSDictionary dualAbParam;
@property (nonatomic) NSDictionary searchBarConfig;
@property (nonatomic) NSString transParam;
@property (nonatomic) NSString nearbyTransformerIcon;
@property (nonatomic) NSString nearbyPreloadResource;
- (void)setTransParam:;
- (id)transParam;
- (id)searchBarConfig;
- (id)dualAbParam;
- (id)nearbyPreloadResource;
- (id)nearbyTransformerIcon;
- (void)setDualAbParam:;
- (void)setSearchBarConfig:;
- (void)setNearbyTransformerIcon:;
- (void)setNearbyPreloadResource:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
