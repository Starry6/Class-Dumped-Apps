@interface VNCanceller : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_releaseSignallingBlock;
- (BOOL)tryToPerformBlock:usingSignallingBlock:;
- (void)signalCancellation;
- (BOOL)wasSignalled;
@end
