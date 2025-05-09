@interface AWELyricStyleCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView downloadIcon;
@property (nonatomic) UIImageView loadingIcon;
@property (nonatomic) AWEScrollStringLabel titleLabel;
@property (nonatomic) BDImageView effectImageView;
@property (nonatomic) double lastTimeRunAnimation;
@property (nonatomic) IESEffectModel currentEffectModel;
@property (nonatomic) BOOL isCurrent;
- (void)setLoadingIcon:;
- (id)loadingIcon;
- (id)downloadIcon;
- (void)setDownloadIcon:;
- (void)p_startLoadingAnimation;
- (void)showLoadingAnimation:;
- (id)currentEffectModel;
- (void)setCurrentEffectModel:;
- (id)createRotationAnimation;
- (id)effectImageView;
- (void)setEffectImageView:;
- (void)p_stopLoadingAnimation;
- (void)setLastTimeRunAnimation:;
- (double)lastTimeRunAnimation;
- (BOOL)isCurrent;
- (void)dealloc;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateText:;
- (void)setIsCurrent:;
@end
