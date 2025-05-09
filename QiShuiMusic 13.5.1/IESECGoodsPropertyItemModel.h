@interface IESECGoodsPropertyItemModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSArray attributes;
@property (nonatomic) NSString content;
@property (nonatomic) q contentMaxLines;
@property (nonatomic) IESECURLModel logo;
@property (nonatomic) NSArray authImageList;
@property (nonatomic) NSString authName;
@property (nonatomic) NSString authType;
@property (nonatomic) NSString authPageTitle;
@property (nonatomic) BOOL certificationNewDesign;
@property (nonatomic) NSString certificationUrl;
@property (nonatomic) IESECURLModel certificationIcon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)contentMaxLines;
- (id)authImageList;
- (id)authName;
- (id)authPageTitle;
- (id)certificationIcon;
- (BOOL)certificationNewDesign;
- (id)certificationUrl;
- (void)setAuthImageList:;
- (void)setAuthName:;
- (void)setAuthPageTitle:;
- (void)setCertificationIcon:;
- (void)setCertificationNewDesign:;
- (void)setCertificationUrl:;
- (void)setContentMaxLines:;
- (id)content;
- (void)setContent:;
- (void)setName:;
- (void)setAuthType:;
- (void)setLogo:;
- (void)setAttributes:;
- (id)attributes;
- (id)authType;
- (id)logo;
- (void).cxx_destruct;
- (id)name;
+ (id)attributesJSONTransformer;
+ (id)authImageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
