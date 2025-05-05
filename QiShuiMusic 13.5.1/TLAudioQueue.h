@interface TLAudioQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> _underlyingSerialQueue;
- (void).cxx_destruct;
- (id)_init;
- (void)performTaskWithBlock:;
- (void)performSynchronousTaskWithBlock:;
- (void)performSynchronousTaskWithOptions:block:;
- (void)assertRunningOnAudioQueue;
- (void)assertNotRunningOnAudioQueue;
- (id)_underlyingSerialQueue;
- (BOOL)_shouldAssumeRunningOnAudioQueue;
+ (id)sharedAudioQueue;
@end
