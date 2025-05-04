@interface AWEShowRewardToast : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel toastLabel;
@property (nonatomic) UILabel amountLabel;
- (id)toastLabel;
- (void)setToastLabel:;
- (void)setupToastView:;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setAmountLabel:;
- (id)amountLabel;
+ (void)showCoinRewardCustomToastWithText:amount:completion:;
+ (void)showImageToastWithModel:;
+ (void)showImageToastWithModel:completion:;
+ (void)showCoinRewardCustomToastWithText:amount:;
@end
