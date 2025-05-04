@interface AWEUserRecommendContactsCellView : AWEUserRecommendBaseCellView
@property (nonatomic) <AWEUserRecommendTableViewModelProtocol> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onSelected;
- (void)p_clickPrimaryButton:;
- (void)p_clickRemoveButton:;
- (void)p_accessibilityRemove;
- (id)viewModel;
- (id)initWithFrame:layout:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)secondaryButtonTitle;
- (void)willDisplay;
- (void)updateAccessibilityElements;
@end
