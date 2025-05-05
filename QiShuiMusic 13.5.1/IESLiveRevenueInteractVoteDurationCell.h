@interface IESLiveRevenueInteractVoteDurationCell : UICollectionViewCell
@property (nonatomic) <IESLiveSubscription> disposable;
@property (nonatomic) NSNumber duration;
@property (nonatomic) UILabel durationLabel;
- (void)updateSelected:;
- (id)disposable;
- (void)setDisposable:;
- (void)updateDuration:viewModel:;
- (void)prepareForReuse;
- (void)setDuration:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)duration;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:;
@end
