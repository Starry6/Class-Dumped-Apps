@interface AWEPadByteCastSinkService : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMmkv:;
- (id)mmkv;
- (void)startCastSinkService;
- (id)manufacturerText;
- (void)landingWithMessage:serviceInfo:;
- (void)routerWithMessage:;
- (void)showAuthorizeDialogWithMessage:serviceInfo:;
- (id)trackCommParamWithSchema:;
- (id)castSinkManager:sdkType:onRcvMessage:serviceInfo:;
- (id)castSinkManager:getBrowseDataWithSdkType:serviceInfo:;
- (void)handlePrivacyPolicyAgreeNotification:;
- (void)startService;
- (void).cxx_destruct;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
+ (id)getService;
@end
