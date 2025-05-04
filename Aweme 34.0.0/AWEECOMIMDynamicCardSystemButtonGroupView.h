@interface AWEECOMIMDynamicCardSystemButtonGroupView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)heightWithElementModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (double)defaultHeight;
@end
