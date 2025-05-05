@interface IESLiveChargeLoadingView : UIView
@property (nonatomic) UIView loadingContainer;
@property (nonatomic) BOOL enableNewStyle;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel textView;
- (BOOL)enableNewStyle;
- (id)initEnableNewStyle:;
- (id)loadingContainer;
- (void)setEnableNewStyle:;
- (void)setLoadingContainer:;
- (void)setupUIs;
- (void)dismiss;
- (id)textView;
- (void)startAnimation;
- (void)setTextView:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
+ (id)showIn:;
+ (id)showIn:enableNewStyle:;
@end
