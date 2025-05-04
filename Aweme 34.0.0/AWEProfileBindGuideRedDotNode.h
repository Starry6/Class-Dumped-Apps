@interface AWEProfileBindGuideRedDotNode : NSObject
@property (nonatomic) <AWEProfileRedDotNodeProtocol> parentNode;
@property (nonatomic) <AWEProfileRedDotNodeModelProtocol> currentModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showRedDotIfNeed;
- (void)bindParentNode:;
- (void)bindAdapter:;
- (void)redDotUIHasUpdate;
- (id)currentChildNodes;
- (id)init;
- (void).cxx_destruct;
- (id)parentNode;
- (id)currentModel;
- (void)setParentNode:;
- (void)setCurrentModel:;
- (void)updateWithModel:;
@end
