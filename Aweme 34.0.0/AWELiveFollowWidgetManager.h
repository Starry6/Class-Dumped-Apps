@interface AWELiveFollowWidgetManager : NSObject
@property (nonatomic) BOOL isPrivateAccount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)willLogoutWithUserID:;
- (id)obtainWidgetInnerSchema:params:needTrack:;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:;
- (void)dealloc;
- (void)setup;
+ (id)sharedManager;
@end
