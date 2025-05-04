@interface AWEProfileHeaderVerificationWithIdContentComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWEProfileHeaderCommonIdentifyComponent_NEWAPI identifyComponent;
@property (nonatomic) AWEProfileHeaderIdContentComponent_NEWAPI idContentComponent;
@property (nonatomic) AWERLVirtualLabel separatorVirtualView;
@property (nonatomic) AWEProfileDualSeparableVirtualView containerVirtualView;
- (id)buildSubComponents;
- (id)buildVirtualView:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (id)idContentComponent;
- (void)setIdContentComponent:;
- (id)containerVirtualView;
- (void)setContainerVirtualView:;
- (id)identifyComponent;
- (void)setIdentifyComponent:;
- (id)separatorVirtualView;
- (void)setSeparatorVirtualView:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
@end
