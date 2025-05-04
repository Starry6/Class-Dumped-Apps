@interface AWELeftSideBarNetworkManager : NSObject
@property (nonatomic) double lastDynamicRequestTimeInterval;
@property (nonatomic) BOOL dynamicDataRequesting;
@property (nonatomic) q currentDynamicRequestSessionID;
@property (nonatomic) double lastCombineRequestTimeInterval;
@property (nonatomic) BOOL combineDataRequesting;
@property (nonatomic) q currentCombineSessionID;
- (void)setCurrentCombineSessionID:;
- (long long)currentCombineSessionID;
- (BOOL)dynamicDataRequesting;
- (void)setCurrentDynamicRequestSessionID:;
- (double)lastCombineRequestTimeInterval;
- (BOOL)combineDataRequesting;
- (double)leftSidebarCombineDataRequestInterval;
- (void)setCombineDataRequesting:;
- (void)setLastCombineRequestTimeInterval:;
- (void)p_requestLeftSidebarCombineWithUserID:dataHash:sessionID:triggerScene:businessID:completion:;
- (double)leftSidebarDynamicDataRequestInterval;
- (double)lastDynamicRequestTimeInterval;
- (void)setDynamicDataRequesting:;
- (long long)currentDynamicRequestSessionID;
- (void)setLastDynamicRequestTimeInterval:;
- (void)requestLeftSidebarAllModuleDataWithUserID:dataHash:needFrequency:triggerScene:businessID:triggerCompletion:requestCompletion:;
- (void)requestLeftSidebarDynamicModuleDataWithBusinessIDList:extraParamDict:triggerCompletion:requestCompletion:;
- (id)init;
@end
