@interface SHSheetImageIdentificationUtilities : NSObject
+ (BOOL)isImageAnalysisFeatureEnabled;
+ (id)personIdResultsFromImage:;
+ (id)suggestedImageDataForFileURL:;
@end
