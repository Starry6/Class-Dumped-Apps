@interface AWEUserRecommendCampaignCellView : AWEUserRecommendBaseCellView
@property (nonatomic) AWEUserRecommendCampaignCellModel model;
@property (nonatomic) <AWEUserRecommendTableViewModelProtocol> viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)onSelected;
- (void)p_clickPrimaryButton:;
- (void)p_clickRemoveButton:;
- (void)setModel:;
- (id)viewModel;
- (id)initWithFrame:layout:;
- (id)model;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)secondaryButtonTitle;
- (void)willDisplay;
@end
