@interface CSJDynamicLogoUnionView : CSJDynamicAbstractView
@property (nonatomic) UILabel ADXLabel;
- (BOOL)haveAdX;
- (id)ADXLabel;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (void)pbu_adjustADXLabelFrameIfNeed;
- (void)setADXLabel:;
- (void)viewAction:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)render;
@end
