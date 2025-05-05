@interface VCPLightVideoAnalyzer : NSObject
@property (nonatomic) NSDictionary publicResults;
@property (nonatomic) NSDictionary privateResults;
- (void).cxx_destruct;
- (id)privateResults;
- (id)publicResults;
- (id)initWithAVAsset:forAnalysisTypes:;
- (id)findMetaTrackforType:;
- (int)processMetaTrackForType:cancel:flags:;
- (int)checkTimeRangeConsistency;
- (int)postProcessOrientationResults;
- (int)analyzeAsset:flags:;
@end
