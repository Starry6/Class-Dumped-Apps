@interface IESLiveRevenueInteractVoteThemeCell : UITableViewCell
@property (nonatomic) <IESLiveSubscription> disposable;
@property (nonatomic) VoteSetting voteTheme;
@property (nonatomic) UILabel themeLabel;
@property (nonatomic) IESLiveImageView selectedView;
- (id)disposable;
- (void)setDisposable:;
- (void)setSelectedView:;
- (void)setThemeLabel:;
- (void)setVoteTheme:;
- (void)showSelectedView;
- (id)themeLabel;
- (void)updateVoteTheme:viewModel:;
- (id)voteTheme;
- (id)initWithStyle:reuseIdentifier:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setupUI;
- (id)selectedView;
@end
