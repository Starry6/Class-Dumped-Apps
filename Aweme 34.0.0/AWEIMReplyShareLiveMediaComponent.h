@interface AWEIMReplyShareLiveMediaComponent : AWEIMFlexComponent
@property (nonatomic) double lastTimeQuireLiveStatus;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLiving;
- (void)componentDidMounted:;
- (void)setIsLiving:;
- (void)p_updateProps;
- (void)p_createPresenterIfNeed;
- (void)presenter:didUpdateWithView:;
- (double)lastTimeQuireLiveStatus;
- (void)setLastTimeQuireLiveStatus:;
- (void)p_quireRoomInfoWithRoomID:completion:;
- (void)p_enterLiveRoom;
- (void)p_enterProfile;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
