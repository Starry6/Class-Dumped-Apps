@interface IESECShopUnFollowRes : IESECBaseApiModel
@property (nonatomic) IESECShopFollowConfigModel followConfig;
@property (nonatomic) NSString followBtnDisplay;
@property (nonatomic) q followIconType;
- (id)followBtnDisplay;
- (id)followConfig;
- (long long)followIconType;
- (void)setFollowBtnDisplay:;
- (void)setFollowConfig:;
- (void)setFollowIconType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
