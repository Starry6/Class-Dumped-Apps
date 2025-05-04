@interface AWETeenFeedAutoPlayController : AWETeenFeedBaseController
@property (nonatomic) AWETeenAutoPlayFloatButton autoPlayFloatButton;
@property (nonatomic) BOOL isUserDrag;
@property (nonatomic) q autoPlayNoActionCount;
@property (nonatomic) q autoPlayCount;
- (void)addNotification;
- (void)setAutoPlayNoActionCount:;
- (long long)autoPlayNoActionCount;
- (void)setIsUserDrag:;
- (BOOL)isUserDrag;
- (void)setAutoPlayCount:;
- (long long)autoPlayCount;
- (void)playerWillLoopPlayingWithAwemeID:videoID:currentTime:;
- (void)syncPlayTimeWithAwemeModel:playedDuration:totalDuration:;
- (id)autoPlayFloatButton;
- (void)setAutoPlayFloatButton:;
- (void)trackAutoPlayFloatButtonStatus;
- (void)trackAutoPlayAutoSlideStatus;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDragging:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
@end
