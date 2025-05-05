@interface BLSXPCAssertionService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)restartAssertionTimeoutTimer:;
- (id)initWithEndpoint:;
- (id)cancelAssertion:withError:;
- (id)acquireAssertion:;
- (void).cxx_destruct;
- (void)replaceWithService:;
- (void)invalidate;
- (id)assertionAcquired:;
- (id)assertion:failedToAcquireWithError:;
- (id)assertionPaused:;
- (id)assertionResumed:;
- (id)assertionWillCancel:;
- (id)assertionDidCancel:withError:;
+ (id)defaultEndpoint;
@end
