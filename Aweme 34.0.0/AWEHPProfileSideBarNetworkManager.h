@interface AWEHPProfileSideBarNetworkManager : NSObject
@property (nonatomic) q currentCombineSessionID;
- (void)requestSidebarAllModuleDataWithUserID:dataHash:triggerCompletion:requestCompletion:;
- (void)setCurrentCombineSessionID:;
- (long long)currentCombineSessionID;
- (void)p_requestLeftSidebarCombineWithUserID:dataHash:sessionID:completion:;
- (id)init;
@end
