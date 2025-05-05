@interface GEORequestCountPowerLogger : NSObject
- (id)init;
- (void)dealloc;
- (void)_terminationRequested:;
- (void).cxx_destruct;
- (void)incrementCountForClient:requestType:;
+ (void)registerXPCActivity;
+ (id)sharedInstance;
@end
