@interface AWEBatManStickerAnimationView : UIView
@property (nonatomic) UIImageView animationImageView;
@property (nonatomic) UIButton enterButton;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton maskButton;
- (void)setEntranceInfo:;
- (id)enterButton;
- (void)setEnterButton:;
- (void)setMaskButton:;
- (id)maskButton;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)descriptionLabel;
- (void)setupSubviews;
- (void)setCloseButton:;
- (id)closeButton;
- (id)animationImageView;
- (void)setAnimationImageView:;
@end
