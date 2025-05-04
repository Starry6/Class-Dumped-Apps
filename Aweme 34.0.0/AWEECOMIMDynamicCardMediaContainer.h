@interface AWEECOMIMDynamicCardMediaContainer : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
@property (nonatomic) NSArray childElementViewArr;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)heightWithElementModel:;
- (void)setChildElementViewArr:;
- (id)childElementViewArr;
- (id)mediaSizeWithMideaViewArr:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (double)heightWithElemntViewArr:;
@end
