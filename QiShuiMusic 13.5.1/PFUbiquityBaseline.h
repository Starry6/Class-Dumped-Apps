@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)moveToPermanentLocation:;
- (id)initWithLocalPeerID:ubiquityRootLocation:forStoreWithName:andManagedObjectModel:;
- (id)initWithBaselineLocation:andLocalPeerID:;
- (BOOL)loadFileFromLocation:error:;
- (BOOL)writeFileToLocation:error:;
@end
