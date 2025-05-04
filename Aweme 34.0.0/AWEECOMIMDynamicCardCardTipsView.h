@interface AWEECOMIMDynamicCardCardTipsView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)heightWithElementModel:;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:model:top:height:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (double)heightWithElementModel:maxSize:;
@end
