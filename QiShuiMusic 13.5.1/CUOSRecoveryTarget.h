@interface CUOSRecoveryTarget : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? progressHandler;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)init;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)_invalidate;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_reportProgressType:;
@end
