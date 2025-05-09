@interface AWEGCPFeedVideoSyncWidget : IESGCPBaseWidget
@property (nonatomic) <AWEGCPVideoContainerRouter> videoContainerRouter;
@property (nonatomic) <AWEGCPGameFeedVideoProtocol> detailVideoView;
@property (nonatomic) BOOL syncFeedVideoWhenDetailClose;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWEFeedTableViewCellViewControllerProtocol> feedCellController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (id)feedCellController;
- (void)widgetDidCreate;
- (void)willCloseGameDetailView:;
- (void)didCloseGameDetailView;
- (void)widgetBindService;
- (BOOL)isFeedVideoPauseBySingleClick;
- (void)syncGameFeedVideoStatesFromFeedCell:;
- (void)syncGameFeedVideoStatesToFeedCell:;
- (BOOL)syncFeedVideoWhenDetailClose;
- (id)detailVideoView;
- (void)setDetailVideoView:;
- (void)setSyncFeedVideoWhenDetailClose:;
- (double)getFeedCellVideoCurrentPlayTime;
- (BOOL)isAlbumVideo;
- (long long)getFeedCellVideoCurrentImageIndex;
- (void)seekFeedCellVideoPlayTime:imageIndex:isAlbumVideo:;
- (id)richContentVideoController;
- (id)videoContainerRouter;
- (void)setVideoContainerRouter:;
- (void).cxx_destruct;
+ (BOOL)widgetShouldBeActivated;
@end
