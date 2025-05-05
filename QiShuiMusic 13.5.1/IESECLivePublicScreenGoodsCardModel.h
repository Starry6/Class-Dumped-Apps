@interface IESECLivePublicScreenGoodsCardModel : IESECLiveApiBaseModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleIcon;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString cover;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString productID;
- (id)cover;
- (void)setCover:;
- (id)productID;
- (id)schema;
- (void)setProductID:;
- (void)setTitle:;
- (void)setSchema:;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (id)titleIcon;
- (void)setTitleIcon:;
+ (id)JSONKeyPathsByPropertyKey;
@end
