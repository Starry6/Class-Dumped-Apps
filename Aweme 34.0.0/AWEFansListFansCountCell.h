@interface AWEFansListFansCountCell : UICollectionViewCell
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIImageView infoIcon;
@property (nonatomic) UILabel reasonLabel;
@property (nonatomic) AWEFansListFansCountWrapperModel wrapperModel;
@property (nonatomic) q fansCount;
- (void)setFansCount:;
- (long long)fansCount;
- (void)configModel:;
- (id)followerCountString:;
- (void)configWithFollowerCount:;
- (void)setWrapperModel:;
- (id)createBodyView;
- (void)trackFansPanelWithAction:;
- (id)wrapperModel;
- (void)didClickInfoIcon;
- (void)didClickReasonLabel;
- (void)setInfoIcon:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)countLabel;
- (void)setCountLabel:;
- (id)infoIcon;
- (void)setReasonLabel:;
- (id)reasonLabel;
@end
