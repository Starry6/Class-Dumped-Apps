@interface APayLoadView : APayAutoRotateView
- (id)init;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setup;
+ (void)dismissLoading;
+ (void)showLoading;
@end
