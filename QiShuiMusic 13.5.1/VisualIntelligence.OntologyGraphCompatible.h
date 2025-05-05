@interface VisualIntelligence.OntologyGraphCompatible : NSObject
@property (nonatomic) Q count;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)isDescendentWithDescendent:ancestor:;
- (id)ontologyNodeWithKnowledgeGraphID:;
- (id)findLeastCommonAncestorWithNode1:node2:;
@end
