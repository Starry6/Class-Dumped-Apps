@interface MBTargetDeviceTransferTask : MBDeviceTransferTask
@property (nonatomic) @? preflightCompletionHandler;
@property (nonatomic) @? keychainTransferCompletionHandler;
- (void)_finishWithError:;
- (void)cancel;
- (void)startDataTransferWithPreflightInfo:completionHandler:;
- (void)start;
- (void)startKeychainTransferWithCompletionHandler:;
- (long long)taskType;
- (void)_cancel;
- (void)startKeychainDataImportWithKeychainInfo:completionHandler:;
- (void)resume;
- (void)startPreflightWithCompletionHandler:;
- (void)startKeychainDataTransferWithCompletionHandler:;
- (void).cxx_destruct;
- (id)initWithFileTransferSession:;
- (void)manager:didFinishDeviceTransferWithError:;
- (void)manager:didFinishDeviceTransferPreflight:error:;
- (void)manager:didUpdateDeviceTransferProgress:;
- (BOOL)_startWithError:;
- (void)_finishKeychainTransferWithError:completionHandler:;
- (void)manager:didFinishDeviceTransferKeychainTransferWithError:;
- (id)preflightCompletionHandler;
- (void)setPreflightCompletionHandler:;
- (id)keychainTransferCompletionHandler;
- (void)setKeychainTransferCompletionHandler:;
@end
