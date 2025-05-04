@interface AWESearchAIGCSSEDataBuilderManager : NSObject
@property (nonatomic) <AWESearchBasicContainerViewControllerProtocol> container;
@property (nonatomic) <CachalotRenderPipelineComponentViewModel> rootNode;
@property (nonatomic) <AWESearchAIGCSSEDataBuilderManagerDelegate> delegate;
- (void)handleNewCardCmd:response:;
- (void)handleReplaceCmd:response:;
- (void)handleRemoveCmd:response:;
- (id)findFirstNodeInTree:withCondition:;
- (id)buildNodeWithSSEData:rootNode:;
- (void)setContainer:;
- (id)container;
- (id)delegate;
- (void).cxx_destruct;
- (id)rootNode;
- (void)setDelegate:;
- (void)setRootNode:;
@end
