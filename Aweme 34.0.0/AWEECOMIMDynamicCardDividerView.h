@interface AWEECOMIMDynamicCardDividerView : AWEECOMIMDynamicCardBaseElementView
- (double)heightWithElementModel:;
- (id)initWithFrame:;
+ (double)designHeight;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
@end
