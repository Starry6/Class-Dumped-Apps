@interface CFPDCloudSource : CFPDContainerSource
- (int)validateMessage:withNewKey:newValue:plistIsAvailableToRead:containerPath:fileUID:mode:diagnosticMessage:;
- (id)cloudConfigurationPath;
- (void)processEndOfMessageIntendingToRemoveSource:;
- (id)copyPropertyListValidatingPlist:;
- (void)synchronizeWithCloud:replyHandler:;
- (id)initWithDomain:userName:storeName:configurationPath:containerPath:shmemIndex:daemon:;
- (id)debugDump;
@end
