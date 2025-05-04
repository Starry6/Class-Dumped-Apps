@interface AWEECOMIMDynamicCardContainerViewV2 : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (id)addChildElementViewBkgView;
- (double)defaultChildVerticalSpace;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (double)childWidthElementModel:defaultWidth:;
@end
