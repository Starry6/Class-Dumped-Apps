@interface DESSparsification : NSObject
- (BOOL)reportErrorWithErrorStr:error:;
- (id)splitResultToChunksWithResult:recipe:baseKey:error:;
@end
