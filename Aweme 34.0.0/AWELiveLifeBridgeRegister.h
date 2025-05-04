@interface AWELiveLifeBridgeRegister : NSObject
@property (nonatomic) NSMutableDictionary mapSyncMethod;
- (void)registerSyncMethod:block:;
- (id)mapSyncMethod;
- (id)executeSyncMethod:on:params:;
- (id)init;
- (void).cxx_destruct;
@end
