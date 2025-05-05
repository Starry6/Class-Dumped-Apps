@interface CJPayToastView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) NSString title;
@property (nonatomic) double time;
- (void)hideToast;
- (void)showInWindow:;
- (void)setTime:;
- (double)time;
- (void)setLabel:;
- (void)setTitle:;
- (id)label;
- (id)title;
- (void).cxx_destruct;
+ (id)toast:inWindow:;
+ (double)textWidth;
+ (id)toast:code:duration:inWindow:;
+ (id)toast:code:inWindow:;
+ (id)toastTitle:timestamp:inWindow:;
+ (id)textFont;
@end
