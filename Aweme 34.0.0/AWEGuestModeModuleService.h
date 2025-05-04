@interface AWEGuestModeModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isGuestModeEnable;
- (id)guestModeManager;
- (id)guestFollowFeedContainer;
- (id)guestHomeViewController;
- (Class)guestNetworkUtil;
- (id)guestLikeListDetailTableController;
@end
