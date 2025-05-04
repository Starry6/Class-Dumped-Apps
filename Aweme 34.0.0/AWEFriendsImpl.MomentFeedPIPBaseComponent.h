@interface AWEFriendsImpl.MomentFeedPIPBaseComponent : NSObject
@property (nonatomic) <ACFMomentFeedPIPDelegate> delegate;
@property (nonatomic) UIView pipView;
@property (nonatomic) AFDCloseFriendsMomentModel momentModel;
@property (nonatomic) AFDCloseFriendsMomentContext context;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)handleLongPressWithGesture:;
- (void)handleTapWithGesture:;
- (void)handlePanWithGesture:;
- (id)pipView;
- (void)setPipView:;
- (id)momentModel;
- (void)setMomentModel:;
- (id)init;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
@end
