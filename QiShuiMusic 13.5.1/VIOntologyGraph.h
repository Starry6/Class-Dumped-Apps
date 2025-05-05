@interface VIOntologyGraph : NSObject
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithOntologyGraph:;
- (BOOL)isDescendentWithDescendent:ancestor:;
- (id)ontologyNodeWithKnowledgeGraphID:;
- (id)findLeastCommonAncestorWithNode1:node2:;
@end
