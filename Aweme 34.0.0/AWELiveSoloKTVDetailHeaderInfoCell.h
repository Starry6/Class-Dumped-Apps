@interface AWELiveSoloKTVDetailHeaderInfoCell : UICollectionViewCell
@property (nonatomic) UIView coverContainer;
@property (nonatomic) UIView songInfoContainer;
@property (nonatomic) UIButton playButton;
@property (nonatomic) AWECollectionButton collectButton;
@property (nonatomic) AWELiveSoloKTVDetailHeaderInfoDiffableModel model;
- (void)configWithModel:;
- (id)collectButton;
- (void)setCollectButton:;
- (void)bindViewModel;
- (id)coverContainer;
- (void)setCoverContainer:;
- (void)didClickPlayButton;
- (void)setupBaseUI;
- (void)updateInfoView;
- (id)songInfoContainer;
- (void)setSongInfoContainer:;
- (void)clearInfoViewIfNeed;
- (unsigned long long)getSongRealDuration:;
- (id)createDurationLabelWithText:;
- (void)didClickCollectButton;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)playButton;
- (void)setPlayButton:;
@end
