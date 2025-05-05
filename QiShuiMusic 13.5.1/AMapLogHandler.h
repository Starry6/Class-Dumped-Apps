@interface AMapLogHandler : NSObject
@property (nonatomic) NSString componentName;
@property (nonatomic) NSString logHandlerName;
@property (nonatomic) NSObject<OS_dispatch_queue> logHandlerQueue;
@property (nonatomic) BOOL onGlobalLoggingQueue;
@property (nonatomic) BOOL onInternalLoggerQueue;
- (void)uploadLogWithlevelStr:complete:;
- (id)logHandlerQueue;
- (BOOL)isOnGlobalLoggingQueue;
- (BOOL)isOnInternalLoggerQueue;
- (id)logHandlerName;
- (void)setLogHandlerQueue:;
- (void)logMessage:;
- (id)componentName;
- (id)init;
- (void).cxx_destruct;
- (void)setComponentName:;
@end
