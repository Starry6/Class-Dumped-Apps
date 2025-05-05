@interface CADTestingOperationGroup : CADOperationGroup
- (BOOL)accessGranted;
- (void)CADTestingSimulateDaemonCrash;
- (void)CADTestingCloseDatabase:;
+ (BOOL)requiresEventAccess;
@end
