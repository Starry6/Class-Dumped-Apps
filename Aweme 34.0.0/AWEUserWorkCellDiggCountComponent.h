@interface AWEUserWorkCellDiggCountComponent : AWERLComponent
@property (nonatomic) AWERLFlexVirtualNode containerNode;
@property (nonatomic) AWERLVirtualNode diggIconNode;
@property (nonatomic) AWERLLabelVirtualNode diggCountNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)virtualNodeWithChildren:;
- (id)containerNode;
- (void)setContainerNode:;
- (id)aAWEPostWorkViewControllerAdapter;
- (id)diggCountNode;
- (id)diggIconNode;
- (void)setDiggIconNode:;
- (void)setDiggCountNode:;
- (void).cxx_destruct;
- (id)initWithData:context:;
- (void)updateUI;
+ (Class)aAWEPostWorkViewControllerAdapterClass;
+ (id)componentWithData:context:;
@end
