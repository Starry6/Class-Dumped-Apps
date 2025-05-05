@interface MSObjectQueue : NSObject
@property (nonatomic) q count;
- (void)dealloc;
- (id)initWithPath:;
- (long long)count;
- (id)_statementLabel:query:;
- (void)appendObjectWrappers:;
- (id)_objectWrapperFromQueueQuery:outSize:;
- (id)allObjectWrappersMaxCount:;
- (id)objectWrappersWithZeroSizeMaxCount:;
- (id)smallestObjectWrappersTargetTotalSize:maxCount:;
- (id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:;
- (void)removeObjectWrappersFromQueue:;
- (void)removeAllObjectWrappersFromQueue;
- (void)commitErrorCountsForObjectWrappers:;
- (void)commitObjectsWrappers:;
@end
