@interface AWETeenRecommendModel : MTLModel
@property (nonatomic) BOOL showLongPressPanelButton;
@property (nonatomic) q roleType;
@property (nonatomic) AWETeenRecommendRoleConfigModel roleConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRoleType:;
- (long long)roleType;
- (id)roleConfig;
- (BOOL)showLongPressPanelButton;
- (void)setShowLongPressPanelButton:;
- (void)setRoleConfig:;
- (void).cxx_destruct;
+ (id)roleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
