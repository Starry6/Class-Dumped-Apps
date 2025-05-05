@interface SNKShotFeaturizer : NSObject
+ (id)featurizeFiles:hallucinatorModelURL:queue:completionHandler:;
+ (id)featurizeFiles:hallucinatorModelURL:queue:resultHandler:completionHandler:;
+ (id)performSegmentationRequest:error:;
+ (id)plistFromFeaturizationResult:error:;
@end
