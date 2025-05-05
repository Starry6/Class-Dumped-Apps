@interface BRTransfersStatusManager : NSObject
@property (nonatomic) NSArray transfers;
- (void)dealloc;
- (id)transfers;
- (void).cxx_destruct;
- (void)removeTransfer:;
- (id)initWithPersonaIdentifier:;
- (void)downloadAndObserveItemAtURL:handler:;
- (id)startObservingItemDownloadProgressAtURL:;
- (void)stopObservingItemDownloadProgress:;
- (void)showGlobalProgressIfNeeded;
- (void)_setupTimerToDisplayGlobalProgress;
- (void)addTransfer:;
- (void)insertTransfer:atIndex:;
- (void)_setGlobalProgress:forIvar:;
- (void)_progressSubscription;
+ (id)defaultManager;
@end
