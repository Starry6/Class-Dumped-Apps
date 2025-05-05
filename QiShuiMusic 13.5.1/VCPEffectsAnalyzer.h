@interface VCPEffectsAnalyzer : NSObject
- (id)initWithAnalysisResults:;
- (id)initWithFlagHasFaceOrPet:;
- (int)analyzeAsset:onDemand:cancel:statsFlags:results:;
- (id)matchingNodeForSceneClassification:inSceneNames:;
- (id)performanSceneClassificationOfImageFileAtURL:;
- (int)enumerateMatchingScenesOfAsset:forLongExposureUsingBlock:;
- (void)reportLivePhotoEffectAnalysisResults:;
- (unsigned long long)generateStatsToBeCollectedFrom:;
+ (BOOL)isAutoLoopFramworkAvailable;
+ (BOOL)usePHAssetScene;
+ (id)gatingTypeKeys;
+ (id)gatingResultKeyToIndex;
+ (id)getResultIndex:;
@end
