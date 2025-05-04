@interface AWELiveDetailController : AWEAwemeNewDetailBaseController
@property (nonatomic) {_NSRange=QQ} subscribeRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveModuleService;
- (void)setNeedsDeleteLiveWithRoomId:uid:;
- (void)subscribedLiveStatusChange:;
- (void)preloadBgImageWithIndexPath:;
- (void)subscribeLiveStatusWithIndexPath:triggerReasonType:;
- (BOOL)enableMixContainerLiveCheck;
- (BOOL)enableMixPreStreamCloseDelete;
- (id)subscribeRange;
- (void)setSubscribeRange:;
- (id)init;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
@end
