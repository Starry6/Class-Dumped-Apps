@interface IESLivePKAnchorRematchView : UIView
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> animationView;
@property (nonatomic) NSString content;
@property (nonatomic) @? actionBlock;
- (void)actionButtonDidClick:;
- (id)content;
- (void)setContent:;
- (id)actionBlock;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setActionBlock:;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)animationView;
- (void)setAnimationView:;
@end
