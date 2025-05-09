@interface AWEProfileExtensionAreaCardModel : MTLModel
@property (nonatomic) Q cardType;
@property (nonatomic) NSString cardId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString originCardData;
@property (nonatomic) NSString category;
@property (nonatomic) IESIMURLModel lightIconURLModel;
@property (nonatomic) IESIMURLModel darkIconURLModel;
@property (nonatomic) AWEProfileExtensionEditInfoModel editPageInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)darkIconURLModel;
- (id)editPageInfo;
- (id)lightIconURLModel;
- (id)originCardData;
- (void)setDarkIconURLModel:;
- (void)setEditPageInfo:;
- (void)setLightIconURLModel:;
- (void)setOriginCardData:;
- (id)schema;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setSchema:;
- (id)title;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)subtitle;
- (id)category;
- (id)cardId;
- (unsigned long long)cardType;
- (void)setCardType:;
- (void)setCardId:;
+ (id)darkIconURLModelJSONTransformer;
+ (id)editPageInfoJSONTransformer;
+ (id)lightIconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
