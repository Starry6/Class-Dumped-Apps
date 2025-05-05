@interface IESLiveAnchorMultiLinkerLoadingView : UIView
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> animationView;
@property (nonatomic) BOOL slim;
@property (nonatomic) NSString content;
- (void)setSlim:;
- (BOOL)slim;
- (id)content;
- (void)setContent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)animationView;
- (void)setAnimationView:;
@end
