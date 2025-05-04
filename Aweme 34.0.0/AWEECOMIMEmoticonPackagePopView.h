@interface AWEECOMIMEmoticonPackagePopView : UIView
@property (nonatomic) BDImageView popEmoticonView;
@property (nonatomic) AWEECOMIMIndicatorView loadingView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rectInTargetView;
@property (nonatomic) UIView targetView;
@property (nonatomic) UIView showView;
@property (nonatomic) NSString emoticonUrl;
- (id)showView;
- (void)setShowView:;
- (void)setRectInTargetView:;
- (id)rectInTargetView;
- (id)popEmoticonView;
- (void)setEmoticonUrl:;
- (void)adjustPopViewFram;
- (id)emoticonUrl;
- (void)showWithURL:targetView:rectInTargetView:showView:;
- (void)dismissPopView;
- (void)setPopEmoticonView:;
- (id)init;
- (void)setLoadingView:;
- (id)targetView;
- (id)loadingView;
- (void)setTargetView:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)shareInstance;
@end
