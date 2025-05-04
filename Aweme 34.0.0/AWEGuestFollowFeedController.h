@interface AWEGuestFollowFeedController : AWEBaseController
@property (nonatomic) AWEGuestFollowFeedViewHolder viewHolder;
@property (nonatomic) BOOL emptyPageHidden;
@property (nonatomic) BOOL needsRefreshFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)viewHolder;
- (void)setViewHolder:;
- (void)refreshCompletion:error:needAnimation:;
- (void)viewDidLoadAfterTableviewSetup;
- (void)initialFetchCompletion:error:;
- (void)setupBinding;
- (void)refreshFeedIfNeeded;
- (void)guestDidFinishFollowUser:isUnfollow:;
- (BOOL)needsRefreshFlag;
- (void)setNeedsRefreshFlag:;
- (void)setEmptyPageHidden:;
- (BOOL)emptyPageHidden;
- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)setupNotifications;
@end
