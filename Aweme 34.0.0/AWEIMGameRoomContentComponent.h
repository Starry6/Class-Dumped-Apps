@interface AWEIMGameRoomContentComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_refreshUIWithStatus:;
- (void)p_requestRoomStatusWithGameID:roomID:completion:;
- (void)p_createPresenter;
- (void)didTapCard;
- (void)p_trackGameCardDidAppear;
- (void)p_trackGameDidTapped;
- (void)p_checkRoomStatus;
- (id)p_makeHighlightedSubtitleWithString:;
- (id)p_trackGameCardParams;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
@end
