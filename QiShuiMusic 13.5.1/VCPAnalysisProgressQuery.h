@interface VCPAnalysisProgressQuery : NSObject
+ (int)queryProgressDetail:forPhotoLibrary:andTaskID:withExtendTimeoutBlock:;
+ (int)queryProgress:forPhotoLibrary:andTaskID:withExtendTimeoutBlock:;
+ (int)queryCachedFaceAnalysisProgress:forPhotoLibrary:withExtendTimeoutBlock:;
+ (void)_countMediaAnalysisWithAssetBatch:andDatabase:analyzedCount:completeAnalyzedCount:partialAnalyzedCount:;
+ (unsigned long long)_countFaceAnalysisWithAssetBatch:;
+ (unsigned long long)_countSceneAnalysisWithAssetBatch:;
+ (unsigned long long)_countOCRAnalysisWithAssetBatch:;
+ (unsigned long long)_countVisualSearchAnalysisWithAssetBatch:;
+ (unsigned long long)_countEmbeddingAnalysisWithAssetBatch:;
+ (unsigned long long)_countAnalysisWithAssetBatch:andDatabase:andTaskID:;
+ (unsigned long long)_countFailuresWithAssetBatch:andDatabase:andTaskID:;
+ (unsigned long long)_vipStatusForPhotoLibrary:andType:;
+ (int)_scanPhotoLibrary:withTaskID:statistics:andExtendTimeoutBlock:;
+ (id)_processedPredicateForTaskID:;
+ (int)_queryProgressDetailExpressEmbeddingAnalysis:forPhotoLibrary:;
+ (int)_queryProgressDetailExpress:forPhotoLibrary:andTaskID:;
+ (BOOL)_screenProgress;
+ (void)reportProgressForPhotoLibrary:taskID:logMessage:withExtendTimeoutBlock:;
@end
