@interface PLPhotoEditPersistenceManager : NSObject
- (id)debugDescriptionForAdjustmentData:;
- (id)debugDescriptionForPhotoEditData:formatIdentifier:formatVersion:;
- (void)loadMasterDimensionsFromPhotoEditData:outMasterWidth:outMasterHeight:;
- (id)loadPhotoEditData:formatIdentifier:formatVersion:importProperties:error:;
- (id)loadCompositionFrom:formatIdentifier:formatVersion:error:;
- (id)dataFromCompositionController:outFormatIdentifier:outFormatVersion:exportProperties:;
+ (id)compositionControllerWithAdjustmentData:asset:outMasterWidth:outMasterHeight:;
+ (BOOL)validateAdjustmentData:formatIdentifier:formatVersion:error:;
+ (unsigned int)renderTypeForAdjustmentData:formatIdentifier:formatVersion:;
@end
