@interface PLUnmanagedAdjustment : PLManagedObject
@property (nonatomic) NSNumber adjustmentBaseImageFormat;
@property (nonatomic) NSString adjustmentFormatIdentifier;
@property (nonatomic) NSString adjustmentFormatVersion;
@property (nonatomic) NSDate adjustmentTimestamp;
@property (nonatomic) NSString editorLocalizedName;
@property (nonatomic) NSString otherAdjustmentsFingerprint;
@property (nonatomic) NSString similarToOriginalAdjustmentsFingerprint;
@property (nonatomic) NSString uuid;
@property (nonatomic) PLAdditionalAssetAttributes assetAttributes;
@property (nonatomic) I adjustmentRenderTypes;
- (id)payloadID;
- (BOOL)isSyncableChange;
- (void)willSave;
- (id)payloadForChangedKeys:;
- (void)awakeFromInsert;
- (BOOL)supportsCloudUpload;
+ (id)entityName;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:;
+ (id)_convertRedEyeCorrections:withOrientation:;
+ (id)_convertRedEyeCorrection:withOrientation:;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:forPlaceholderAsset:inLibrary:error:;
@end
