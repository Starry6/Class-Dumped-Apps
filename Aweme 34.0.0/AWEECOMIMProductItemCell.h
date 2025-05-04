@interface AWEECOMIMProductItemCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImgView;
@property (nonatomic) BDPCDDynamicCardPriceView priceView;
@property (nonatomic) UIImageView gradientView;
- (id)priceView;
- (void)setPriceView:;
- (id)coverImgView;
- (id)createImageWithMaskLayerColors:itemHeight:;
- (void)bindItemData:bigMask:;
- (void)setCoverImgView:;
- (id)gradientView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setGradientView:;
@end
