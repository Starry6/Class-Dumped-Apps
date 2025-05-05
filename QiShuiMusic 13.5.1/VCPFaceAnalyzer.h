@interface VCPFaceAnalyzer : NSObject
- (void)dealloc;
- (void)_checkAnalysisRequests:forTooSmallFaceObservations:withAnalysisResults:;
- (id)_existingFacesFromAsset:;
- (int)refineAnalysis:requestHandler:forAsset:orientedWidth:orientedHeight:;
- (int)analyzeAsset:withResource:resourceURL:quickMode:results:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (int)analyzeFaceQuality:withAsset:andCancelBlock:;
- (int)_performAnalysis:withRequestHandler:quickMode:sourceWidth:sourceHeight:;
- (int)quickAnalyzeAsset:results:;
- (int)_loadImageRequestHandler:orientation:bufferWidth:bufferHeight:withResource:resourceURL:andAsset:;
- (int)updateMissingFaceprintForFaces:withAsset:;
- (int)_createBlurRequests:andExposureRequests:forFaceObservations:;
+ (BOOL)_downsampleBeforeFaceProcessing;
+ (BOOL)_faceprintFastMode;
@end
