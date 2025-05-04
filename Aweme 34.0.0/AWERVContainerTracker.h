@interface AWERVContainerTracker : NSObject
@property (nonatomic) AWERVDetailPageContext context;
@property (nonatomic) BOOL hasTrackedPageShow;
- (void)trackSearchButtonShow;
- (void)trackDataForEnterPrivateChatWithPeerUserID:;
- (void)trackDataForEnterGroupChatWithCID:;
- (void)trackEnterUserProfileWithEnterMethod:;
- (void)trackPageShowIfNeeded;
- (void)trackClickLandscapeModeEntrance:;
- (void)trackStayTime:logExtraDict:;
- (void)trackForFullScreenEntranceClick;
- (void)trackForQuitRelatedVideoWithType:;
- (void)trackSearchButtonClick;
- (void)trackVideoScroll:;
- (BOOL)hasTrackedPageShow;
- (void)setHasTrackedPageShow:;
- (void)trackShowFullScreenEntrance;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (id)trackParamsForMVChannelWithModel:logExtraDict:;
@end
