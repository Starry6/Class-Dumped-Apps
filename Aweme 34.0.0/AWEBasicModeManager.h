@interface AWEBasicModeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL basicModeStatus;
- (void)showToast:;
- (void)didFinishLogin;
- (BOOL)basicModeStatus;
- (void)setEventEnable:;
- (BOOL)shouldHaveBasicModeEnterance;
- (void)uploadBasicModeStatus:;
- (void)trackEventBasicModeStatus;
- (void)setBasicModeStatus:completion:;
- (void)setBasicModeStatus:;
- (void)trackBasicModeActionWithType:;
- (id)init;
- (void)dealloc;
+ (id)sharedManager;
@end
