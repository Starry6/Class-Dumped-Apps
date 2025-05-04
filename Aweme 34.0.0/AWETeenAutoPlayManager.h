@interface AWETeenAutoPlayManager : NSObject
@property (nonatomic) BOOL currentAutoPlayState;
@property (nonatomic) AWETeenAutoPlayGuidePopoverManager guidePopoverManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)teenModeDidChange:isLogout:;
- (void)p_registerMessage;
- (void)dismissPopoverIfNeeded;
- (BOOL)currentAutoPlayState;
- (void)updateTeenAutoPlayState:;
- (void)tryToShowAutoPlayGuidePopoverWithTarget:;
- (void)p_initAutoPlayState;
- (id)guidePopoverManager;
- (void)setCurrentAutoPlayState:;
- (id)createAutoPlayFloatButton;
- (void)setGuidePopoverManager:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)isTeenAutoPlayEnable;
+ (id)getAutoPlayConfig;
+ (BOOL)isSceneInAutoPlayWhiteList:;
+ (BOOL)isAutoPlayFloatButtonEnableWithVCType:;
+ (id)sharedManager;
@end
