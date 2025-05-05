@interface SGMContactDetailRejected : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:type:extracted:extractionModelVersion:;
@end
