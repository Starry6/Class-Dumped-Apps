@interface DMCPowerAssertion : DMCProcessAssertion
@property (nonatomic) BOOL parked;
- (void)dealloc;
- (id)initWithReason:;
- (BOOL)isParked;
- (void)park;
- (void)unpark;
@end
