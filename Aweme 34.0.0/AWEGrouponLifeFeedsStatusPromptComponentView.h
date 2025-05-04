@interface AWEGrouponLifeFeedsStatusPromptComponentView : AWEGrouponLifeFeedsBaseComponentView
@property (nonatomic) AWEGrouponLifeFeedsStatusPromptVC statusPromptVC;
- (void)bindViewModel:;
- (id)statusPromptVC;
- (void)retryFetchMainData;
- (void)hiddenErrorView;
- (void)setStatusPromptVC:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showErrorView;
@end
