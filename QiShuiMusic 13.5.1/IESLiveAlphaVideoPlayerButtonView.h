@interface IESLiveAlphaVideoPlayerButtonView : UIView
@property (nonatomic) UIImageView buttonImageView;
@property (nonatomic) UILabel buttonLabel;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originFrame;
- (void)startDisplayAnimationWithLabel:;
- (void)setOriginFrame:;
- (void)addButtonAction:forTarget:;
- (id)originFrame;
- (void)startDismissAnimationDelay:completion:;
- (void)updateImageWithURL:placeholderImage:completion:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)buttonLabel;
- (void)setButtonLabel:;
- (id)buttonImageView;
- (void)setButtonImageView:;
@end
