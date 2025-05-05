@interface PHAssetDeleteRequest : PHTrashableObjectDeleteRequest
@property (nonatomic) PHAssetDeleteOptions deleteOptions;
- (void).cxx_destruct;
- (void)encodeToXPCDict:;
- (id)initWithXPCDict:request:clientAuthorization:;
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
- (void)_updateSyndicationStateForSyndicationIdentifier:savedAssetType:sourceLibraryID:;
- (id)deleteOptions;
- (void)setDeleteOptions:;
@end
