@interface CKContextSemaphore : NSObject
- (unsigned long long)sharedMemorySize;
- (BOOL)busy;
- (void)setActiveGauge:;
- (unsigned long long)requestsServed;
- (void)dealloc;
- (void)notifyAll;
- (id)initWithCoder:;
- (void)notify;
- (unsigned long long)gauge;
- (void)encodeWithCoder:;
- (void)resetPending;
- (void)decPending;
- (long long)pendingExceptionsCount;
- (void).cxx_destruct;
- (unsigned long long)activeGauge;
- (id)initSemaphoreForXPCService;
- (BOOL)tryAcquireNeedsIncPending:;
- (long long)waitFor:;
- (void)incPending;
- (long long)pending;
- (unsigned long long)numAcquired;
+ (BOOL)supportsSecureCoding;
@end
