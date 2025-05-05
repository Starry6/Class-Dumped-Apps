@interface IESECGoodsDetailRecommendBusinessMetaModel : NSObject
@property (nonatomic) IESECRecommendItemModel recommendItem;
@property (nonatomic) q tapActionType;
@property (nonatomic) q maskAppearType;
@property (nonatomic) BOOL openWithGoods;
@property (nonatomic) BOOL openWithGoodsImage;
- (long long)maskAppearType;
- (BOOL)openWithGoods;
- (BOOL)openWithGoodsImage;
- (id)recommendItem;
- (void)setMaskAppearType:;
- (void)setOpenWithGoods:;
- (void)setOpenWithGoodsImage:;
- (void)setRecommendItem:;
- (void)setTapActionType:;
- (long long)tapActionType;
- (void).cxx_destruct;
@end
