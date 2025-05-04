@interface AWEIMGameRoomV2ContentComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_refreshUIWithStatus:;
- (void)p_createPresenter;
- (void)didTapCard;
- (void)p_trackGameCardDidAppear;
- (void)p_trackGameDidTapped;
- (void)p_requestRoomStatusWithRoomID:completion:;
- (id)p_makeHighlightedSubtitleWithString:;
- (id)p_trackGameCardParams;
- (void)p_refreshRoomStatus;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
@end
