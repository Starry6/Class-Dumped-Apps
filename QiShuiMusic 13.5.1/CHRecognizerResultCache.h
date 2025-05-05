@interface CHRecognizerResultCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)cacheTextResult:drawing:recognitionEngineCachingKey:;
- (id)retrievePartialResultsForDrawing:recognitionEngineCachingKey:matchingColumnRange:;
- (void)clearCacheForKey:;
@end
