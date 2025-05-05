@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)complete;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)metadataProviderSpecialization:didCompleteWithMetadata:;
- (void)metadataProviderSpecializationDidFail:;
- (void)requestQuickLookThumbnailForURL:size:badgeType:image:;
- (void)fetchIconAndThumbnailFromQuickLookForURL:;
- (void)fetchMetadataFromURL:;
- (BOOL)shouldUseQuickLookForFileType;
- (void)fetchMetadataForReachableFile:;
- (void)generateFallbackMetadataForUnreachableFile:;
- (void)cleanUpTemporaryFile;
- (void)updatePreliminaryMetadata;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:;
+ (id)specializedMetadataProviderForURLWithContext:;
+ (id)_thumbnailQueue;
@end
