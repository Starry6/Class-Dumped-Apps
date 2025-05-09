@interface AWELiveEntry : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLiving;
- (BOOL)isInAudienceLiving;
- (BOOL)isInAnchorLiving;
- (BOOL)isInLiving;
- (BOOL)isAudienceDuringLive;
- (BOOL)isScreenshotLiving;
- (void)trackLiveTerminateData:;
- (id)liveTerminateCacheData;
- (void)clearLiveTerminateCacheData;
- (void)trackLiveFirstRequestCommand:;
- (BOOL)isEnableAudioCaptureInBackground;
- (id)getLiveRoomFactory;
- (void)removeLiveGuideBubbleIfNeeded;
- (BOOL)canEnterLiveRoom:;
- (id)getFeedLiveMarkViewWithFrame:;
- (BOOL)dylibIsLoaded;
- (BOOL)canPreviewLiveAutoEnter:;
- (BOOL)hasUsedLiveFunctionRecently;
- (void)prestreamLeave:;
- (id)getLeaveLiveExtra;
- (unsigned long long)feedLiveMarkType;
- (unsigned long long)feedLiveMarkDisplayTypeWith:;
- (void)updateLivePlayersEyesProtectState:intensityValue:;
- (void)storeFetchLiveModelOfFeedList:type:referString:;
- (void)storeLoadLiveModelOfFeedList:type:referString:;
- (void)hideLiveInappPush;
- (void)loadLiveDylibAndRunFeedReadyWithTask:;
- (void)appendLiveFeedsWithEnterFrom:withFeedList:withTrackExtra:;
- (void)readLiveFeedWithEnterFrom:withRoomID:;
- (void)refreshPostUnreadRoomsWithEnterFrom:;
- (void)quitInnerFeedPostUnreadRoomsWithEnterFrom:;
- (BOOL)liveInnerFeedRerankOptEnable;
- (id)getFeedLiveMarkViewNewTypeHeadWithFrame:;
- (id)getFeedLiveMarkViewNewTypeTitleWithFrame:;
- (id)getFeedLiveDecorationViewWithFrame:;
- (id)getLiveStatusIndicatorView:;
- (id)liveFilterItemForEyesProtect;
@end
