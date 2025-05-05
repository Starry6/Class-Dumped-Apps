@interface PLVisualSearchAttributes : PLManagedObject
@property (nonatomic) NSData visualSearchData;
@property (nonatomic) s algorithmVersion;
@property (nonatomic) NSDate adjustmentVersion;
@property (nonatomic) PLMediaAnalysisAssetAttributes mediaAnalysisAssetAttributes;
+ (id)entityName;
@end
