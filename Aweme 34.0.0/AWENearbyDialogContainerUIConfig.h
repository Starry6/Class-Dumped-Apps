@interface AWENearbyDialogContainerUIConfig : MTLModel
@property (nonatomic) AWENearbyDialogContainerWidthHeightConfig widthConfig;
@property (nonatomic) AWENearbyDialogContainerWidthHeightConfig heightConfig;
@property (nonatomic) AWENearbyDialogContainerLayoutGravity layoutGravity;
@property (nonatomic) AWENearbyDialogContainerMarginConfig marginConfig;
@property (nonatomic) BOOL needInterceptAction;
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
- (id)layoutGravity;
- (void)setLayoutGravity:;
- (BOOL)needInterceptAction;
- (void)setNeedInterceptAction:;
- (void).cxx_destruct;
+ (id)marginConfigJSONTransformer;
+ (id)widthConfigJSONTransformer;
+ (id)heightConfigJSONTransformer;
+ (id)layoutGravityJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
