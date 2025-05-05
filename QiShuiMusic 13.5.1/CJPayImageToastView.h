@interface CJPayImageToastView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
@property (nonatomic) double time;
- (void)hideToast;
- (void)p_setupUI;
- (void)showInWindow:;
- (id)backgroundView;
- (void)setTime:;
- (double)time;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)imageView;
- (void)setImageView:;
+ (void)toastImage:title:duration:inWindow:;
@end
