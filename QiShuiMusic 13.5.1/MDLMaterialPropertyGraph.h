@interface MDLMaterialPropertyGraph : MDLMaterialPropertyNode
@property (nonatomic) NSArray nodes;
@property (nonatomic) NSArray connections;
- (id)connections;
- (void)evaluate;
- (id)nodes;
- (void).cxx_destruct;
- (id)initWithNodes:connections:;
@end
