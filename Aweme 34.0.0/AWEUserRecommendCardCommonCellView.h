@interface AWEUserRecommendCardCommonCellView : AWEUserRecommendCardBaseCellView
@property (nonatomic) <AWEUserRecommendCellModelProtocol> model;
@property (nonatomic) <AWEUserRecommendTableViewModelProtocol> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)onSelected;
- (void)onModelUpdated;
- (void)setModel:;
- (id)viewModel;
- (id)model;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
