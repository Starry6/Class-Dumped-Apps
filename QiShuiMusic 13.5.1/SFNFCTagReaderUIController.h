@interface SFNFCTagReaderUIController : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) q mode;
@property (nonatomic) NSString purpose;
- (void)setPurpose:;
- (id)init;
- (void)_invalidated;
- (id)dispatchQueue;
- (id)purpose;
- (void)_activateWithCompletion:;
- (void)setDispatchQueue:;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (long long)mode;
- (void)invalidate;
- (void)setMode:;
- (void)uiActivatedWithCompletion:;
- (void)uiInvalidatedWithCompletion:;
- (void)nfcTagScannedCount:;
- (void)nfcTagScanned;
- (void)_nfcTagScannedCount;
@end
