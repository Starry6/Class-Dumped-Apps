@interface PLResourceModelValidationError : NSError
- (id)init;
- (id)description;
+ (id)allPossibleErrorCodes;
+ (id)missingRequiredResourcesErrorForAsset:message:;
+ (id)duplicateResourceErrorAmongResources:forAsset:;
+ (id)duplicatedCPLTypeAssetErrorForAsset:cplType:;
+ (id)localAvailabilityInconsistencyErrorForResource:;
+ (id)unexpectedLocalResourceError:;
+ (id)malformedKeyErrorForKey:resource:;
+ (id)malformedTableThumbnailKeyErrorForKey:assetID:;
+ (id)unreachableKeyErrorForKey:atURL:resource:;
+ (id)unreachableTableThumbnailErrorForKey:assetID:;
+ (id)unreachableFileThumbnailErrorForKey:assetID:;
+ (id)tableThumbUUIDMistmatchErrorForKey:indexFromKey:assetID:;
@end
