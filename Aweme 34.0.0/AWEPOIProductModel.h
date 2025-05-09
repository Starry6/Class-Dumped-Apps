@interface AWEPOIProductModel : AWEBaseApiModel
@property (nonatomic) NSString productId;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString productUrl;
@property (nonatomic) NSString tagTitle;
@property (nonatomic) NSString price;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) NSString buttonUrl;
@property (nonatomic) AWEURLModel imageUrl;
@property (nonatomic) NSString selledNum;
@property (nonatomic) AWEPOIServiceSpuEntryModel detailEntry;
@property (nonatomic) AWEPOIServiceSpuEntryModel buttonEntry;
@property (nonatomic) NSNumber houseFinenessType;
- (void)setTagTitle:;
- (id)tagTitle;
- (id)detailEntry;
- (void)setDetailEntry:;
- (id)productUrl;
- (void)setProductUrl:;
- (id)buttonEntry;
- (id)houseFinenessType;
- (id)buttonUrl;
- (void)setButtonUrl:;
- (id)selledNum;
- (void)setSelledNum:;
- (void)setButtonEntry:;
- (void)setHouseFinenessType:;
- (id)price;
- (void)setProductName:;
- (id)productName;
- (id)productId;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setPrice:;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
