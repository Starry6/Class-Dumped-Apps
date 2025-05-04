@interface AWEProfileHeaderCommonIdentifyComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) double maxWidth;
@property (nonatomic) AWEProfileHeaderVirtualView virtualView;
@property (nonatomic) AWEProfileYYLabel label;
@property (nonatomic) UIColor defaultColor;
- (id)buildSubComponents;
- (id)buildVirtualView:;
- (void)setVirtualView:;
- (void)calibrateSize;
- (id)initWithData:context:maxWidth:;
- (void)refreshVirtualView;
- (void)setLabel:;
- (double)maxWidth;
- (id)label;
- (void)setData:;
- (void)onTap;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (id)virtualView;
- (id)defaultColor;
- (void)setDefaultColor:;
+ (void)trackIdentifyClickWithContext:model:;
+ (id)identifyDescWithModel:defaultColor:;
+ (void)trackIdentifyShowWithContext:model:;
@end
