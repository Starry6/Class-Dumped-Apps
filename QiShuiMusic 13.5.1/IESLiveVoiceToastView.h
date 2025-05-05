@interface IESLiveVoiceToastView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) UILabel label;
- (void)showToast:duration:;
- (id)init;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setupView;
+ (void)showToast:duration:modal:;
+ (void)showToast:;
+ (void)hide;
@end
