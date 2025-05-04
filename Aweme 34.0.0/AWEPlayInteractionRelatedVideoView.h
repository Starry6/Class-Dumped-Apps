@interface AWEPlayInteractionRelatedVideoView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UILabel rightTitleLabel;
@property (nonatomic) @? noticeTapped;
- (void)layoutSubviews;
- (id)tipsLabel;
- (void)reloadWithModel:;
- (void)setTipsLabel:;
- (void)setNoticeTapped:;
- (id)noticeTapped;
- (void)reloadWithText:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
- (id)rightTitleLabel;
- (void)setRightTitleLabel:;
@end
