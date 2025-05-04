@interface AWEECOMIMDynamicCardImgView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView imgView;
- (void)setImgView:;
- (id)imgView;
- (void)updateWithElememtModel:;
- (double)widthWithElementModel:maxWidth:;
- (double)heightWithElementModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (double)widthWithElementModel:maxSize:;
@end
