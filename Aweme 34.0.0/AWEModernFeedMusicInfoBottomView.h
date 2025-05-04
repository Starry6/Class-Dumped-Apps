@interface AWEModernFeedMusicInfoBottomView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? enterMusicDetailBlock;
- (void)configWithModel:;
- (id)enterMusicDetailBlock;
- (void)setEnterMusicDetailBlock:;
- (id)initWithFrame:;
- (void)setup;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)viewTapped;
@end
