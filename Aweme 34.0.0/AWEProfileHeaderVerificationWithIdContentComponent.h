@interface AWEProfileHeaderVerificationWithIdContentComponent : AWERLComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWEProfileHeaderCommonIdentifyComponent identifyComponent;
@property (nonatomic) AWEProfileHeaderIdContentComponent idContentComponent;
@property (nonatomic) AWERLLabelVirtualNode separatorVNode;
@property (nonatomic) AWERLDualSeparableVirtualNode containerNode;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (id)containerNode;
- (void)setContainerNode:;
- (id)idContentComponent;
- (void)setIdContentComponent:;
- (id)identifyComponent;
- (id)separatorVNode;
- (void)setIdentifyComponent:;
- (void)setSeparatorVNode:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
@end
