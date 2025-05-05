@interface SGMUnknownContactInformationShown : NSObject
@property (nonatomic) PETScalarEventTracker tracker;
- (id)init;
- (id)tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:app:wasSuggestedContact:;
@end
