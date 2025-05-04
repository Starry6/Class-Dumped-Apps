@interface AWEOpenPlatformLynxAuthManager : NSObject
@property (nonatomic) NSMutableDictionary authInfoMap;
@property (nonatomic) NSMapTable containerMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didLoadFailedWithUrl:error:;
- (id)containerMap;
- (void)setContainerMap:;
- (BOOL)shouldUseLynxAuth:;
- (void)startLynxAuth:originParams:withAuthCompletion:withFailCompletion:;
- (void)setAuthInfoMap:;
- (void)subscribeLynxAuthEvent;
- (BOOL)checkAuthEntranceInAllowList:;
- (BOOL)checkAuthPageTypeInAllowList:;
- (BOOL)checkAuthPageSupportLandScape:;
- (void)requestAuthInfoWithModel:params:;
- (id)authInfoMap;
- (id)sourceFromFlowType:;
- (BOOL)useAnniex:;
- (BOOL)useAnniexSSR:;
- (id)getAnniexContainerURLWithSSR:;
- (void)runCompletionWithAuthID:responseModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareManager;
@end
