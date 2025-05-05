@interface AFAudioPowerUpdater : NSObject
@property (nonatomic) <AFAudioPowerProviding> provider;
@property (nonatomic) q frequency;
- (void)_endUpdate;
- (long long)frequency;
- (void)dealloc;
- (void)_createNewXPCWrapperWithCompletion:;
- (float)_unsafePeakPower;
- (void)_destroySharedMemory;
- (void)getPowerWithCompletion:;
- (void)endUpdate;
- (float)_unsafeAveragePower;
- (id)_createSharedMemoryXPCObject;
- (void)_timerFired;
- (id)provider;
- (void)_invalidate;
- (void)_writeSharedMemoryWithAveragePower:peakPower:;
- (void)_beginUpdate;
- (void).cxx_destruct;
- (id)initWithProvider:queue:frequency:delegate:;
- (BOOL)_createSharedMemory;
- (void)beginUpdate;
- (void)_getPowerWithCompletion:;
- (void)createNewXPCWrapperWithCompletion:;
- (void)_updatePowerWithAveragePower:andPeakPower:;
- (void)invalidate;
- (id)_createNewXPCWrapper;
@end
