@interface AWEUserWorkCellWaterFallBottomContainerComponent : AWERLComponent
@property (nonatomic) AWERLFlexChildVirtualNode waterfallTitleLabelNode;
@property (nonatomic) AWERLVirtualNode waterfallBottomVirtualNode;
@property (nonatomic) AWERLFlexChildVirtualNode waterfallBottomNode;
@property (nonatomic) AWERLFlexVirtualNode containerNode;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (id)containerNode;
- (void)setContainerNode:;
- (id)aAWEPostWorkViewControllerAdapter;
- (void)configBottomView:;
- (id)__buildChildrenNode;
- (id)waterfallTitleLabelNode;
- (id)waterfallBottomNode;
- (id)buildWaterfallIconImage;
- (id)waterfallIBottomVirtualNode;
- (void)setWaterfallTitleLabelNode:;
- (id)waterfallBottomVirtualNode;
- (void)setWaterfallBottomVirtualNode:;
- (void)setWaterfallBottomNode:;
- (void).cxx_destruct;
+ (Class)aAWEPostWorkViewControllerAdapterClass;
@end
