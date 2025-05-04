@interface AWEECOMIMDynamicCardButtonGroupView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
@property (nonatomic) NSMutableDictionary customActionModeldict;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)heightWithElementModel:;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)setCustomActionModeldict:;
- (id)customActionModeldict;
- (void)onButtonClick:;
- (id)autoSizeButtonWithType:buttonText:disabled:;
- (id)autoSizeButtonFrameWithCurrentIdx:buttonModelArr:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (BOOL)buttonShouldShow:;
+ (double)autoSizeBtnTopSpacing;
+ (double)vSpaceingBetweenBtns;
+ (double)autoSizeBtnHeight;
+ (double)autoSizeBtnBottomSpacing;
+ (double)autoSizeBtnLeftSpacing;
@end
