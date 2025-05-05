@interface SGMContactConfirmed : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:app:firstNameAdj:lastNameAdj:middleNameAdj:isUpdate:extracted:extractionModelVersion:selfId:contactDetail:;
@end
