@interface PFHistoryAnalyzer : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithOptions:;
- (id)instantiateNewAnalyzerContextForChangesInStore:;
- (BOOL)processTransaction:withContext:error:;
@end
