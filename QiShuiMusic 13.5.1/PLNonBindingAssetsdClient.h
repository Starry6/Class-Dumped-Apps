@interface PLNonBindingAssetsdClient : NSObject
@property (nonatomic) PLAssetsdSystemLibraryURLReadOnlyClient systemLibraryURLReadOnlyClient;
@property (nonatomic) PLAssetsdLibraryManagementClient libraryManagementClient;
@property (nonatomic) PLAssetsdDemoClient demoClient;
@property (nonatomic) PLAssetsdPrivacySupportClient privacySupportClient;
- (id)init;
- (void)_updateLibraryStateConnectionInterrupted:;
- (void).cxx_destruct;
- (id)privacySupportClient;
- (id)demoClient;
- (id)libraryManagementClient;
- (id)systemLibraryURLReadOnlyClient;
@end
