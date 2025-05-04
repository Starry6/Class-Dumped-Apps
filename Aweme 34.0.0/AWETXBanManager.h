@interface AWETXBanManager : NSObject
@property (nonatomic) AWEStorage storage;
@property (nonatomic) BOOL isChangeNameAndAvatarAlertViewShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (BOOL)shouldShowAlertView;
- (void)setIsChangeNameAndAvatarAlertViewShowing:;
- (void)hasShowAlertView;
- (BOOL)isChangeNameAndAvatarAlertViewShowing;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
