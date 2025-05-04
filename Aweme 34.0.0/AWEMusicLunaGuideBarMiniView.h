@interface AWEMusicLunaGuideBarMiniView : AWEMusicLunaGuideBarView
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) UIButton mainButton;
@property (nonatomic) BOOL isNewProfileArrowStyleStatus;
@property (nonatomic) BOOL isProfileCollectLargeFontModeOptV2;
- (void)setMainButtonTitle:;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (void)p_setUpUI;
- (id)initWithIsNewProfileArrowStyleStatus:isProfileCollectLargeFontModeOptV2:;
- (void)setIsNewProfileArrowStyleStatus:;
- (void)setIsProfileCollectLargeFontModeOptV2:;
- (BOOL)isNewProfileArrowStyleStatus;
- (BOOL)isProfileCollectLargeFontModeOptV2;
- (id)init;
- (void)setSubTitle:;
- (void).cxx_destruct;
- (void)setMainTitle:;
- (id)logoImageView;
- (void)setLogoImageView:;
- (id)mainButton;
- (void)setMainButton:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
