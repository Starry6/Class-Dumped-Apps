@interface AWEUserWorkCellUnreadLabelComponent : AWERLComponent
@property (nonatomic) {AWERLFlexChildStyle=Qdddd} style;
@property (nonatomic) AWERLVirtualNode childNode;
@property (nonatomic) AWERLFlexChildVirtualNode unreadLabelNode;
@property (nonatomic) AWERLLabelVirtualNode unreadLabelVirtualNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)childNode;
- (void)setChildNode:;
- (id)virtualNodeWithChildren:;
- (BOOL)dynamicComponent;
- (void)changeAlpha:;
- (id)unreadLabelNode;
- (id)unreadLabelVirtualNode;
- (void)setUnreadLabelNode:;
- (void)setUnreadLabelVirtualNode:;
- (id)style;
- (void).cxx_destruct;
- (id)initWithData:context:;
- (void)setStyle:;
+ (id)componentWithData:context:;
@end
