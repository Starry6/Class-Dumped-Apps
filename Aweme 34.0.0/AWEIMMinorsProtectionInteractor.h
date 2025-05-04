@interface AWEIMMinorsProtectionInteractor : AWEIMComponentBase
@property (nonatomic) BOOL showKeyBoard;
@property (nonatomic) BOOL firstFrameOpt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)hostVC_afterFirstRender;
- (BOOL)showKeyBoard;
- (id)vcParent;
- (BOOL)shouldSendUserActionWithModel:;
- (BOOL)isEnterConFirstTimeWithModel:;
- (BOOL)firstFrameOpt;
- (void)setFirstFrameOpt:;
- (void)setShowKeyBoard:;
- (void)p_showKeyboardIfNeededV2;
- (void)p_showKeyboardIfNeeded;
- (BOOL)__checkAndShowSafetyWarning;
+ (BOOL)canCreateComponentWithContext:;
@end
