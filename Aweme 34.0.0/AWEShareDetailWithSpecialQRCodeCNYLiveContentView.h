@interface AWEShareDetailWithSpecialQRCodeCNYLiveContentView : AWEShareDetailWithQRCodeBaseContentView
@property (nonatomic) UIImageView playIconView;
@property (nonatomic) UIView authorContainerView;
@property (nonatomic) UIView textContainerView;
- (id)authorContainerView;
- (void)setAuthorContainerView:;
- (id)playIconView;
- (void)setPlayIconView:;
- (void)syncContentFrom:;
- (void)updateSubviewsForGenerateImage;
- (void)setUseNewVersion;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (void)setTextContainerView:;
- (id)textContainerView;
@end
