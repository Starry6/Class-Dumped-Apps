@interface MPStoreLibraryPersonalizationResponse : MPModelResponse
@property (nonatomic) MPSectionedCollection representedObjectResults;
@property (nonatomic) MPModelResponse libraryResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)libraryResponse;
- (id)representedObjectResults;
- (void)setLibraryResponse:;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:responseHandler:;
- (void).cxx_destruct;
- (void)setRepresentedObjectResults:;
- (void)_libraryResponseDidInvalidateNotification:;
@end
