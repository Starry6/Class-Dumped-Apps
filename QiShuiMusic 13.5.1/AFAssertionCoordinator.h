@interface AFAssertionCoordinator : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)getPendingAndActiveAssertionsWithCompletion:;
- (id)identifier;
- (void)barrier:;
- (void)_activateAssertionWithUUID:;
- (void)relinquishAssertionWithUUID:error:options:;
- (void)relinquishAssertionWithUUID:context:options:;
- (void)_invalidate;
- (id)acquireRelinquishableAssertionWithContext:relinquishmentHandler:;
- (void)_addAssertion:;
- (void).cxx_destruct;
- (void)_deactivateAndRemoveAssertionWithUUID:context:error:options:;
- (id)description;
- (id)initWithIdentifier:queue:delegate:;
- (void)relinquishAsertionsPassingTest:error:;
- (void)getActiveAssertionsWithCompletion:;
- (void)invalidate;
- (unsigned long long)numberOfActiveAssertions;
- (unsigned long long)numberOfPendingAndActiveAssertions;
- (void)relinquishAsertionsPassingTest:context:;
@end
