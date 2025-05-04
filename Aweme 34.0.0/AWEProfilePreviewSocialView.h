@interface AWEProfilePreviewSocialView : UIView
@property (nonatomic) UILabel praiseTitleLabel;
@property (nonatomic) UILabel praiseCountLabel;
@property (nonatomic) UILabel followTitleLabel;
@property (nonatomic) UILabel followCountLabel;
@property (nonatomic) UILabel fansTitleLabel;
@property (nonatomic) UILabel fansCountLabel;
- (id)praiseCountLabel;
- (id)praiseTitleLabel;
- (id)followCountLabel;
- (id)followTitleLabel;
- (id)fansCountLabel;
- (id)fansTitleLabel;
- (void)setPraiseTitleLabel:;
- (void)setPraiseCountLabel:;
- (void)setFollowTitleLabel:;
- (void)setFollowCountLabel:;
- (void)setFansTitleLabel:;
- (void)setFansCountLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setupUI;
@end
