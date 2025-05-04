@interface AWEGuestCommonFeedController : AWEBaseController
@property (nonatomic) BOOL guestInteractedFlag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)guestDidFinishFollowUser:isUnfollow:;
- (void)guestDidDiggAweme:isUndigg:;
- (void)setGuestInteractedFlag:;
- (BOOL)guestInteractedFlag;
- (id)init;
- (void)dealloc;
- (void)setupNotifications;
@end
