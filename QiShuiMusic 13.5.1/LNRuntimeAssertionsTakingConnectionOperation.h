@interface LNRuntimeAssertionsTakingConnectionOperation : LNInterfaceConnectionOperation
@property (nonatomic) NSSet runtimeAssertions;
@property (nonatomic) CLInUseAssertion locationAssertion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithIdentifier:connectionInterface:systemProtocols:priority:activity:;
- (void)acquireRuntimeAssertions;
- (void)invalidateRuntimeAssertions;
- (id)runtimeAssertions;
- (void)setRuntimeAssertions:;
- (id)locationAssertion;
- (void)setLocationAssertion:;
@end
