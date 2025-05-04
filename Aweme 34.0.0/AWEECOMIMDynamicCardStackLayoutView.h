@interface AWEECOMIMDynamicCardStackLayoutView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView bkgView;
@property (nonatomic) {CGSize=dd} maxSize;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)widthWithElementModel:;
- (double)heightWithElementModel:;
- (void)layoutChildElement;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:model:top:height:;
- (id)currentMaxSize;
- (id)maxSize;
- (void)setMaxSize:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (double)widthWithElementModel:maxSize:;
+ (id)childFrame:childElementView:elementModel:maxSize:;
+ (id)stackFillerSizeWithParentModel:maxSize:;
@end
