@interface TimonServiceCenter : NSObject
+ (void)bindBacktraceProtocl:;
+ (void)bindClass:toProtocol:;
+ (void)bindInstance:toProtocol:;
+ (void)bindKVStoreService:;
+ (void)bindLoggerService:;
+ (void)bindMonitorService:;
+ (void)bindNetworkStatusService:;
+ (void)bindSettingService:;
+ (void)bindTrackerService:;
+ (void)bindUploadAlogService:;
+ (void)bindUserExceptionService:;
@end
