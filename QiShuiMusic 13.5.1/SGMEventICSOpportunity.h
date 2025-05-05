@interface SGMEventICSOpportunity : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:source:recipient:accountSetup:;
@end
