@interface BWMemoryPool : NSObject
@property (nonatomic) Q poolIdentifier;
- (void)disable;
- (id)init;
- (void)dealloc;
- (id)newMTLBufferWithLength:forDevice:;
- (void)ensureMemoryAsyncWithSize:;
- (void)_addFlushAssertion;
- (BOOL)getInUseFootprint:andOutOfUseFootprint:;
- (id)newFlushAssertion:;
- (int)disableForCaptureStream:;
- (int)enableForCaptureStream:;
- (void)flush;
- (int)enableForCaptureDevice:;
- (unsigned long long)poolIdentifier;
- (int)disableForCaptureDevice:;
- (void)enableForPixelBufferAttributes:;
- (void)_removeFlushAssertion;
- (void)disableWithCompletionHandler:;
+ (id)sharedMemoryPool;
@end
