@interface IESLiveLinkRTCInteractViewLayouter : NSObject
+ (void)layoutSessions:hostSession:inContainer:animated:;
+ (void)layoutSmallViews:inContainerView:;
+ (id)responseSessionOfGesture:inSessions:inContainerView:;
+ (id)smallViewDefaultFrameInContainer:;
+ (void)updateLayoutOfPublisher:withSessions:owner:;
+ (void)updatePKLayoutOfPublisher:withSessions:owner:currentUser:;
+ (id)viewListFromSessions:maxCount:ignorSession:;
@end
