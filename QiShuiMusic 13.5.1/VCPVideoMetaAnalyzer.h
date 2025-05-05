@interface VCPVideoMetaAnalyzer : NSObject
@property (nonatomic) NSDictionary publicResults;
@property (nonatomic) NSDictionary privateResults;
- (int)finalizeAnalysis;
- (id)privateResults;
- (int)processMetadataGroup:flags:;
- (id)publicResults;
+ (id)analyzerForTrackType:withTransform:requestAnalyses:formatDescription:;
@end
