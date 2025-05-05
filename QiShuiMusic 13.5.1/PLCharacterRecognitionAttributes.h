@interface PLCharacterRecognitionAttributes : PLManagedObject
@property (nonatomic) NSData characterRecognitionData;
@property (nonatomic) NSData machineReadableCodeData;
@property (nonatomic) s algorithmVersion;
@property (nonatomic) NSDate adjustmentVersion;
@property (nonatomic) PLMediaAnalysisAssetAttributes mediaAnalysisAssetAttributes;
+ (id)entityName;
@end
