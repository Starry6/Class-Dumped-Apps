@interface IESECShopFollowStateModel : IESECBaseApiModel
@property (nonatomic) NSString followBtnDisplay;
@property (nonatomic) q shopBtnLocation;
@property (nonatomic) q followStatus;
@property (nonatomic) BOOL shouldShowShopEntry;
@property (nonatomic) IESECShopFollowConfigModel followConfig;
- (long long)shopBtnLocation;
- (id)followBtnDisplay;
- (id)followConfig;
- (long long)followStatus;
- (void)setFollowBtnDisplay:;
- (void)setFollowConfig:;
- (void)setFollowStatus:;
- (void)setShopBtnLocation:;
- (void)setShouldShowShopEntry:;
- (BOOL)shouldShowShopEntry;
- (void).cxx_destruct;
@end
