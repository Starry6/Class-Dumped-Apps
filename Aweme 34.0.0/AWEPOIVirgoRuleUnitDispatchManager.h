@interface AWEPOIVirgoRuleUnitDispatchManager : NSObject
@property (nonatomic) NSMutableArray unitManagerList;
@property (nonatomic) AWEPOIVirgoUnitDefaultManager defaultManager;
@property (nonatomic) NSObject<OS_dispatch_queue> custom_queue;
@property (nonatomic) NSLock dispatchLock;
- (void)setDefaultManager:;
- (void)registerUnit:withKey:;
- (void)removeUnitWithKey:;
- (void)registerUnitManager:;
- (void)executeWithUnit:completion:;
- (void)setUnitManagerList:;
- (void)setCustom_queue:;
- (id)dispatchLock;
- (id)unitManagerList;
- (void)dispatchAsyncAtMain:delay:unitKey:params:completion:;
- (void)dispatchIDLEWithUnitKey:params:completion:;
- (void)dispatchSyncWithUnitKey:params:completion:;
- (id)custom_queue;
- (void)executeWithUnitKey:params:completion:;
- (void)setDispatchLock:;
- (id)init;
- (id)defaultManager;
- (void).cxx_destruct;
@end
