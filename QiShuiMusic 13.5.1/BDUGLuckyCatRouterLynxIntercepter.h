@interface BDUGLuckyCatRouterLynxIntercepter : NSObject
@property (nonatomic) NSString fallbackLaunchMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_realHandleUrl:;
- (id)__buildParamWithContext:extraParams:;
- (BOOL)_isNewContainerWithSchema:;
- (id)_pathForUrlSchema:;
- (void)_realHandleUrl:isNewContainer:extraParams:;
- (BOOL)canHandleUrl:;
- (id)createVCWithContext:;
- (id)createViewWithContext:;
- (BOOL)enableProcessSamePage;
- (id)fallbackLaunchMode;
- (id)handleUrl:;
- (BOOL)isMustBeAwakened;
- (id)launchModeWithUrl:;
- (id)launchModeWithUrl:default:;
- (void)removeTargetLynx:survivedVCs:launchMode:topVC:currentNav:;
- (void)setFallbackLaunchMode:;
- (id)survivedVCsWithtargetLynxVC:VCStack:;
- (id)targetLynxVCWithUrl:fromVCStack:;
- (void).cxx_destruct;
+ (long long)intercepterType;
+ (id)sharedInstance;
@end
