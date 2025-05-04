@interface AWEPlayInteractionRelatedTemplateView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) @? noticeTapped;
- (id)tipsLabel;
- (void)reloadWithModel:;
- (void)setTipsLabel:;
- (void)setNoticeTapped:;
- (id)noticeTapped;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
@end
