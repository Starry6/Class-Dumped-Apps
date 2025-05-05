@interface SGMSelfIdModelScore : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:model:result:supervision:extractionModelVersion:;
@end
