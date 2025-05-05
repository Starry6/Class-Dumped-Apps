@interface PFHistoryAnalyzerContext : NSObject
- (BOOL)processChange:error:;
- (void)dealloc;
- (id)initWithOptions:;
- (id)newAnalyzerStateForChange:error:;
- (BOOL)finishProcessing:;
- (id)fetchSortedStates:;
- (BOOL)resetStateForObjectID:error:;
- (BOOL)processTransaction:error:;
- (BOOL)reset:;
- (id)analyzerStateForChangedObjectID:error:;
@end
