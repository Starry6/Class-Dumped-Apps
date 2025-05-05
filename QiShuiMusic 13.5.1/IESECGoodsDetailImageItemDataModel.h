@interface IESECGoodsDetailImageItemDataModel : IESECBaseApiModel
@property (nonatomic) IESECImageBoxElement image;
@property (nonatomic) NSString imageType;
@property (nonatomic) IESECGoodsDetailDetailImageMoreInfo moreInfo;
- (id)moreInfo;
- (id)imageType;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
- (void)setImageType:;
- (void)setMoreInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
