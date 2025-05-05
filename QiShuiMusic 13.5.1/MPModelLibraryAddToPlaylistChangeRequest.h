@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject
@property (nonatomic) MPModelPlaylist playlist;
@property (nonatomic) MPModelObject representativeModelObject;
@property (nonatomic) MPModelObject referralObject;
@property (nonatomic) MPSectionedCollection songResults;
@property (nonatomic) @? storeImportAllowedHandler;
- (id)newOperationWithResponseHandler:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)playlist;
- (void)setPlaylist:;
- (id)representativeModelObject;
- (void)setRepresentativeModelObject:;
- (id)referralObject;
- (void)setReferralObject:;
- (id)songResults;
- (void)setSongResults:;
- (id)storeImportAllowedHandler;
- (void)setStoreImportAllowedHandler:;
@end
