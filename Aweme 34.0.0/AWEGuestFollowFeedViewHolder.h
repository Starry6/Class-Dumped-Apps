@interface AWEGuestFollowFeedViewHolder : AWEBaseListViewHolder
@property (nonatomic) UIView emptyVacantView;
- (void)showToast:;
- (void)setupViewHolder;
- (void)hideEmptyVacantView;
- (void)showEmptyVacantView;
- (id)emptyVacantView;
- (void)setEmptyVacantView:;
- (void)updateLayout;
- (void).cxx_destruct;
@end
