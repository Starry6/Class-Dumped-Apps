@interface SGMContactDetailSent : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:source:detail:foundIn:hasName:tokens:;
@end
