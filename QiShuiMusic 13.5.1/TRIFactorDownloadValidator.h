@interface TRIFactorDownloadValidator : NSObject
+ (BOOL)validateDownloadForFactors:withNamespace:paths:container:factorsState:assetIndexesByTreatment:experimentIds:assetIdsByFactorPack:rolloutFactorNames:rolloutDeployments:error:;
@end
