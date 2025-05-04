@interface AWEECOMIMDynamicCardSystemHeaderView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (id)iconImgView;
- (double)heightWithElementModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)headerLabel;
+ (double)designHeight;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (double)topPadding;
+ (id)titleFont;
+ (double)bottomPadding;
@end
