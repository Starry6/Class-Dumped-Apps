@interface BLSPendingAssertionService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)restartAssertionTimeoutTimer:;
- (id)cancelAssertion:withError:;
- (id)acquireAssertion:;
- (void).cxx_destruct;
- (void)replaceWithService:;
@end
