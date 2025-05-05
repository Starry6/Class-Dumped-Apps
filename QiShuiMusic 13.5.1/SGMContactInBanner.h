@interface SGMContactInBanner : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:app:extracted:selfId:extractionModelVersion:contactDetail:;
@end
