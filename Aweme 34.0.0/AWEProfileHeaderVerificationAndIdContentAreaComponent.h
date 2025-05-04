@interface AWEProfileHeaderVerificationAndIdContentAreaComponent : AWERLComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) NSArray commonComponentsArray;
@property (nonatomic) AWEProfileHeaderVerificationWithIdContentComponent verificationWithIdContentComponent;
@property (nonatomic) AWERLFlexVirtualNode containerNode;
@property (nonatomic) BOOL hasTrackedShowIdentifies;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (void)updateComponentData:;
- (id)initWithData:context:maxWidth:;
- (id)containerNode;
- (void)setContainerNode:;
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
