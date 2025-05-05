@interface CLServiceVendor : NSObject
- (id)init;
- (void)dealloc;
- (id)setRecordingTriggerMap:outputPathBase:;
- (BOOL)ensureServiceIsRunning:;
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:;
- (BOOL)isServiceRunning:;
- (BOOL)isServiceEnabled:;
- (void)enableTimeCoercion;
- (BOOL)isTimeCoercionEnabled;
- (void)retireServiceWithName:;
- (int)missBehavior;
- (id)proxyForService:forClient:;
- (void).cxx_destruct;
- (void)amendServiceReplacementMap:missBehavior:;
- (void)intendToSyncServiceWithName:;
- (id)proxyForService:;
- (void)setServiceReplacementMap:missBehavior:;
- (id)getServiceWithName:;
+ (id)sharedInstance;
+ (void)rereadConfiguration:;
@end
