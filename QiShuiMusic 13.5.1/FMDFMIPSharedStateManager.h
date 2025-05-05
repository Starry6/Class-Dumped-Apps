@interface FMDFMIPSharedStateManager : NSObject
@property (nonatomic) NSURL fmipSharedFileStaticURL;
@property (nonatomic) NSObject<OS_dispatch_queue> stateManagerQueue;
- (void)setStateManagerQueue:;
- (BOOL)_removeSharedInfo;
- (id)init;
- (id)_fmipSharedFileURL;
- (BOOL)fmipActive;
- (void)recalculateLostMode;
- (unsigned long long)lostModeType;
- (id)fmipSharedFileStaticURL;
- (id)_readSharedInfo;
- (void).cxx_destruct;
- (id)stateManagerQueue;
- (void)setFmipSharedFileStaticURL:;
- (void)setFMiPActive:;
- (BOOL)_writeSharedInfo:;
+ (id)sharedInstance;
@end
