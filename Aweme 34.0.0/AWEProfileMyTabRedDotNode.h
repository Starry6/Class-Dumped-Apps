@interface AWEProfileMyTabRedDotNode : NSObject
@property (nonatomic) <AWEProfileRedDotAdapterProtocol> myTabRedDotAdapter;
@property (nonatomic) q businessType;
@property (nonatomic) <AWEProfileRedDotNodeModelProtocol> currentModel;
@property (nonatomic) NSMutableSet childNodesSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBusinessType:;
- (void)bindParentNode:;
- (void)bindAdapter:;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (id)childNodesSet;
- (void)setChildNodesSet:;
- (id)nodeWithBusinessType:;
- (void)setMyTabRedDotAdapter:;
- (id)myTabRedDotAdapter;
- (long long)businessType;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)currentModel;
- (void)addChildNode:;
- (void)setCurrentModel:;
- (void)updateWithModel:;
@end
