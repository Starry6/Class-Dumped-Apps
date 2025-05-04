@interface AWEIMDecisionDirector : NSObject
@property (nonatomic) NSDictionary nodeTypeToResolverMap;
- (BOOL)syncRecursiveResolveConfigNameWithNode:context:completion:;
- (BOOL)syncRecursiveResolveAllValidConfigNamesWithNode:context:diffNames:completion:;
- (id)nodeTypeToResolverMap;
- (BOOL)syncRecursiveResolveReceivingTextMessageInDecesionTreeWithNode:context:recvTextMsgNodeArray:completion:;
- (BOOL)p_syncRecursiveResolveRefreshingInDecesionTreeWithTargetNodeAttributes:node:context:;
- (id)initWithResolverMap:;
- (id)resolveConfigNameWithDecisionTree:context:;
- (id)resolveAllValidConfigNamesWithDecisionTree:context:;
- (BOOL)resolveNode:context:;
- (BOOL)syncRecursiveResolveRefreshingOtherMessageInDecesionTreeWithNode:context:;
- (BOOL)syncRecursiveResolveRefreshingRecentMessageInDecesionTreeWithNode:context:;
- (void)setNodeTypeToResolverMap:;
- (void).cxx_destruct;
+ (void)logDecisionNode:context:isHitNode:;
+ (void)dfsFindAllConfigNames:withNode:context:;
@end
