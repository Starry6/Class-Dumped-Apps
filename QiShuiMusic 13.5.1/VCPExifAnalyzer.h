@interface VCPExifAnalyzer : NSObject
- (void).cxx_destruct;
- (id)initWithProperties:forAnalysisTypes:;
- (id)transformUprightAboutTopLeft:;
- (int)addFaceResults:flags:;
- (int)analyzeAsset:results:;
@end
