@interface AWEECOMIMDynamicCardTextMainView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)childElementWidth;
- (double)heightWithElementModel:;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:model:top:height:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (id)marginAndPaddingSize:;
+ (double)heightWithElementModel:maxSize:;
+ (double)topPadding;
@end
