@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource
@property (nonatomic) HSHomeSharingLibrary library;
@property (nonatomic) NSString artworkDataSourceIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLibrary:;
- (void)loadRepresentationForArtworkCatalog:completionHandler:;
- (id)supportedSizesForCatalog:;
- (id)library;
- (id)artworkDataSourceIdentifier;
- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:;
- (id)cacheKeyForCatalog:size:;
- (id)requestForCatalog:size:;
- (BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
+ (id)artworkDataSourceShortDescription;
+ (id)artworkDataSourceWithIdentifier:;
@end
