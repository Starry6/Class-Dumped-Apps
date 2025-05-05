@interface VMUDominatorCallTreeCreator : NSObject
@property (nonatomic) VMUProcessObjectGraph processObjectGraph;
@property (nonatomic) VMUDominatorGraph dominatorGraph;
@property (nonatomic) VMUCallTreeRoot callTreeRoot;
@property (nonatomic) NSNumber desiredAddress;
@property (nonatomic) VMUClassPatternMatcher desiredClassesPattern;
- (void).cxx_destruct;
- (void)removeJunkEdges;
- (id)removeJunkNodes;
- (unsigned long long)sizeForNodeName:nodeInfo:;
- (id)callTreeWithGraph:groupByType:showRegionVirtualSize:debugTimer:;
- (void)buildCallTreeWithRootNodeNames:;
- (id)remainingNodeNames;
- (id)_addNodeWithNodeName:nodeInfo:callTreeParentNode:parentNodeName:parentNodeType:reference:;
- (void)buildCallTreeWithNodeName:callTreeParentNode:parentNodeName:parentNodeType:reference:rootNodeFilter:;
- (id)referenceDecriptionForSourceNodeAddress:referenceInfo:;
- (id)groupByTypeNameForNode:;
- (id)groupByNodeNameForNode:parentNodeName:parentNodeType:reference:;
- (id)processObjectGraph;
- (void)setProcessObjectGraph:;
- (id)dominatorGraph;
- (void)setDominatorGraph:;
- (id)callTreeRoot;
- (void)setCallTreeRoot:;
- (id)desiredAddress;
- (void)setDesiredAddress:;
- (id)desiredClassesPattern;
- (void)setDesiredClassesPattern:;
@end
