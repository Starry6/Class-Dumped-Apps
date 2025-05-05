@interface CHRecognizerInferenceCache : NSObject
- (void)clearCache;
- (id)init;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (void)cacheActivationMatrix:strokeEndings:drawing:recognitionEngineCachingKey:;
- (id)retrieveActivationMatrixForDrawing:recognitionEngineCachingKey:outStrokeEndings:;
@end
