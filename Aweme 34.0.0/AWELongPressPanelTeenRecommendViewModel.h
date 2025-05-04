@interface AWELongPressPanelTeenRecommendViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) MMKV mmkv;
@property (nonatomic) UIView popoverTarget;
- (void)showPopoverIfNeeded;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)needShow;
- (void)configVM;
- (void)setPopoverTarget:;
- (void)toastWithText:;
- (void)reportSuccessCompletion;
- (id)popoverTarget;
- (id)init;
- (void).cxx_destruct;
+ (id)longPressPanelViewModel;
@end
