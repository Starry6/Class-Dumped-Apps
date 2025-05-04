@interface AWEProfileHeaderCommonIdentifyComponent : AWERLComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWERLVirtualNode node;
@property (nonatomic) AWEProfileYYLabel label;
@property (nonatomic) UIColor defaultColor;
- (id)buildSubComponents;
- (id)virtualNodeWithChildren:;
- (void)refreshNode;
- (void)calibrateSize;
- (id)initWithData:context:maxWidth:;
- (void)setLabel:;
- (id)node;
- (double)maxWidth;
- (id)label;
- (void)setData:;
- (void)onTap;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (void)setNode:;
- (id)defaultColor;
- (void)setDefaultColor:;
+ (void)trackIdentifyClickWithContext:model:;
+ (id)identifyDescWithModel:defaultColor:;
+ (void)trackIdentifyShowWithContext:model:;
@end
