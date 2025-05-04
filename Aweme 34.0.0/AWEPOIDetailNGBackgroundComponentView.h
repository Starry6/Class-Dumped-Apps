@interface AWEPOIDetailNGBackgroundComponentView : AWEPOIDetailHeaderImageComponentBaseView
@property (nonatomic) UIView backgroundVCPlaceHolderView;
@property (nonatomic) AWEPOIDetailBackgroundViewController backgroundVC;
- (void)updateViewModel:;
- (void)updateComponentViewAlpha:;
- (void)updateBackgroundViewTop:;
- (id)backgroundVCPlaceHolderView;
- (id)backgroundVC;
- (void)setBackgroundVC:;
- (void)setBackgroundVCPlaceHolderView:;
- (void)didTap:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setupUI;
@end
