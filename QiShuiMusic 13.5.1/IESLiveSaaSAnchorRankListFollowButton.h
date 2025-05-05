@interface IESLiveSaaSAnchorRankListFollowButton : UIButton
@property (nonatomic) IESLiveSaaSAnchorRankListCellViewModel viewModel;
@property (nonatomic) RACDisposable disposable;
- (id)disposable;
- (void)setDisposable:;
- (void)updateFollowing:;
- (id)viewModel;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)updateWithViewModel:;
@end
