@interface SGMFoundInMailModelScore : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:model:contactDetail:result:correct:mode:supervision:;
@end
