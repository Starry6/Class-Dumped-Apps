@interface AWEIMBatManInviteContentComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_refreshUIWithStatus:;
- (void)p_enterBtnTapped;
- (void)p_requestRoomStatusWithGameID:roomID:completion:;
- (void)p_createPresenter;
- (void)p_refreshBatManRoomStatus;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
