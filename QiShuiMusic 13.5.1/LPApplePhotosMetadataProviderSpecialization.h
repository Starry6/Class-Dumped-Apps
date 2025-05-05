@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void)photoLibraryDidChangeOnMainQueue:;
- (void).cxx_destruct;
- (void)fail;
- (void)completeWithMetadata:;
- (void)didFetchAsset:;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:;
@end
