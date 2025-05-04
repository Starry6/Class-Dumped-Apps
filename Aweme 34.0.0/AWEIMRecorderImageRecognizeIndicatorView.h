@interface AWEIMRecorderImageRecognizeIndicatorView : UIView
@property (nonatomic) AWEIMRecorderImageRecognizeModel viewModel;
@property (nonatomic) q state;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) BOOL iconIsRotating;
- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)p_iconViewRemoveAnimation;
- (void)p_iconViewAddAnimation;
- (void)__updateImageView;
- (void)__updateText;
- (void)setIconIsRotating:;
- (BOOL)iconIsRotating;
- (id)textLabel;
- (id)initWithViewModel:;
- (id)viewModel;
- (id)contentView;
- (long long)state;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setState:;
- (id)imageView;
@end
