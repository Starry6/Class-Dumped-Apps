@interface AXMSourceNode : AXMVisionEngineNode
@property (nonatomic) BOOL shouldProcessRemotely;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)triggerWithContext:cacheKey:resultHandler:;
- (void)produceImage:;
- (id)resultHandlers;
- (void)addResultHandler:;
- (void)removeResultHandler:;
- (void)removeAllResultHandlers;
- (BOOL)shouldProcessRemotely;
- (void)setShouldProcessRemotely:;
- (void)_nodeQueue_addResultHandler:;
- (void)_nodeQueue_removeResultHandler:;
- (void)_nodeQueue_removeAllResultHandlers;
+ (BOOL)supportsSecureCoding;
@end
