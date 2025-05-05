@interface IESLatchPromiseDataHandler : NSObject
- (id)generateNodesWithDict:;
- (id)generatePromiseResultWithNode:;
- (id)generateUpdatedDict:withNode:;
- (id)p_generateDictForNode:withPaths:value:;
- (id)p_generateNodesWithDict:pathArr:;
- (id)p_generateUpdatedDict:withNode:paths:value:;
@end
