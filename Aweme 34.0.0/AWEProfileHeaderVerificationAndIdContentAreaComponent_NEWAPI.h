@interface AWEProfileHeaderVerificationAndIdContentAreaComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) NSArray commonComponentsArray;
@property (nonatomic) AWEProfileHeaderVerificationWithIdContentComponent_NEWAPI verificationWithIdContentComponent;
@property (nonatomic) AWERLVirtualFlexView containerVirtualView;
@property (nonatomic) BOOL hasTrackedShowIdentifies;
- (id)buildSubComponents;
- (id)buildVirtualView:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (id)containerVirtualView;
- (void)setContainerVirtualView:;
- (BOOL)hasTrackedShowIdentifies;
- (void)setHasTrackedShowIdentifies:;
- (void)generateSubComponents;
- (id)commonComponentsArray;
- (id)verificationWithIdContentComponent;
- (void)trackIdentifiesShowIfNeeded:;
- (void)setCommonComponentsArray:;
- (void)setVerificationWithIdContentComponent:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
@end
