@interface AWETeenFeedDoubleColumnViewHolder : AWEBaseListViewHolder
@property (nonatomic) AWEUILoadingView refreshLoadingView;
@property (nonatomic) UIView switchModeCapsuleContainerView;
@property (nonatomic) UIImageView switchModeCapsuleIconImageView;
@property (nonatomic) UILabel switchModeCapsuleLabel;
@property (nonatomic) UIView switchModeRoundContainerView;
@property (nonatomic) UIImageView switchModeRoundIconImageView;
- (void)setupViewHolder;
- (id)refreshLoadingView;
- (void)setRefreshLoadingView:;
- (id)switchModeCapsuleContainerView;
- (id)switchModeCapsuleIconImageView;
- (id)switchModeCapsuleLabel;
- (id)switchModeRoundContainerView;
- (id)switchModeRoundIconImageView;
- (void)startRefreshLoading;
- (void)stopRefreshLoading;
- (void)setSwitchModeCapsuleContainerView:;
- (void)setSwitchModeCapsuleIconImageView:;
- (void)setSwitchModeCapsuleLabel:;
- (void)setSwitchModeRoundContainerView:;
- (void)setSwitchModeRoundIconImageView:;
- (void)updateLayout;
- (void).cxx_destruct;
@end
