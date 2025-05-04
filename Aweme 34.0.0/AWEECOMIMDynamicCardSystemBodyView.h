@interface AWEECOMIMDynamicCardSystemBodyView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
@property (nonatomic) UIImageView rightIconView;
@property (nonatomic) UIImageView backgroudImageView;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (id)rightIconView;
- (void)setRightIconView:;
- (id)backgroudImageView;
- (void)setBackgroudImageView:;
- (double)childElementWidth;
- (double)heightWithElementModel:;
- (id)addChildElementViewBkgView;
- (void)addChildElementView:model:top:height:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (double)leftRightPadding;
+ (id)sizeWithElementModel:maxSize:;
+ (id)marginAndPaddingSize:;
+ (double)heightWithElementModel:maxSize:;
+ (double)rightIconHeight;
+ (double)topPadding;
@end
