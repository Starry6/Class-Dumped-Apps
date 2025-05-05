@interface MBSourceDeviceTransferTask : MBDeviceTransferTask
- (void)_finishWithError:;
- (void)cancel;
- (void)start;
- (long long)taskType;
- (void)_cancel;
- (void)resume;
- (id)initWithFileTransferSession:;
- (void)manager:didFinishDeviceTransferWithError:;
- (void)manager:didFinishDeviceTransferKeychainTransfer:;
- (void)manager:didFinishDeviceTransferPreflight:error:;
- (void)manager:didUpdateDeviceTransferProgress:;
- (BOOL)_startWithError:;
- (void)_shortenPrebuddyExpirationIfNeeded;
@end
