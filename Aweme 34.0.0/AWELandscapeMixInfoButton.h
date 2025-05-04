@interface AWELandscapeMixInfoButton : UIButton
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel episodeLabel;
@property (nonatomic) UIView imageViewContainer;
@property (nonatomic) UIImageView bottomImageView;
@property (nonatomic) UIImageView middleImageView;
@property (nonatomic) UIImageView topImageView;
- (id)topImageView;
- (void)setTopImageView:;
- (id)episodeLabel;
- (void)setEpisodeLabel:;
- (id)imageViewContainer;
- (void)setImageViewContainer:;
- (void)setMiddleImageView:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setIconImageView:;
- (void)setupUI;
- (void)updateWithModel:;
- (id)bottomImageView;
- (void)setBottomImageView:;
- (id)middleImageView;
@end
