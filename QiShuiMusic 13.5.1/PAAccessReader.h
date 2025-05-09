@interface PAAccessReader : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL loggingEnabled;
@property (nonatomic) <PAAccessReaderDelegate> delegate;
- (id)initWithConnection:queue:;
- (void)dealloc;
- (void)setDelegate:;
- (void)setLoggingEnabled:;
- (void)lockedNotifyDidSetLoggingEnabled:;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)loggingEnabled;
- (id)initWithConnection:queue:enablementChangedNotificationName:;
- (id)initWithQueue:;
- (id)queue;
- (id)publisherForReportWithError:;
- (id)publisherForAll;
- (id)publisherForAllSince:error:;
- (id)publisherForAllSince:until:reversed:error:;
- (void)handleEnabledChangeNotification;
- (id)requestSandboxExtensionWithError:;
- (id)getOrCreateStreamsWithError:;
- (void)setEnabledStateForLoggingEnabled:;
- (void)exportToFileHandle:completion:;
- (BOOL)lockedEnsureSandboxExtensionWithError:;
- (void)lockedSetEnabledStateForLoggingEnabled:;
- (void)lockedAssertValidEnabledState;
+ (id)sharedInstance;
+ (id)fileNameForExport;
+ (BOOL)exportFromPublisher:toStream:error:;
+ (BOOL)exportFromPublisher:toStream:withCancellationToken:error:;
@end
