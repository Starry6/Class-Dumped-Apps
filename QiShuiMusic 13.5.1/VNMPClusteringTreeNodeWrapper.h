@interface VNMPClusteringTreeNodeWrapper : NSObject
@property (nonatomic) ^v node;
@property (nonatomic) BOOL freeNodeOnDealloc;
- (float)distance;
- (id)node;
- (id)descriptor;
- (void)dealloc;
- (id)left;
- (id)right;
- (void)setNode:;
- (id)initWithNode:freeNodeOnDealloc:;
- (int)nodeId;
- (float)avgDistance;
- (int)leafsCount;
- (id)getLeafNodes;
- (BOOL)freeNodeOnDealloc;
- (void)setFreeNodeOnDealloc:;
@end
