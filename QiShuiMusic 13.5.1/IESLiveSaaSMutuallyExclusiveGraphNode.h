@interface IESLiveSaaSMutuallyExclusiveGraphNode : NSObject
@property (nonatomic) NSNumber nodeID;
@property (nonatomic) NSMutableArray childNodes;
- (id)nodeID;
- (id)init;
- (void).cxx_destruct;
- (id)childNodes;
- (void)setNodeID:;
- (void)setChildNodes:;
@end
