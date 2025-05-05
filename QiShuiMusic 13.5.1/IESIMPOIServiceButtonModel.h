@interface IESIMPOIServiceButtonModel : MTLModel
@property (nonatomic) Q displayType;
@property (nonatomic) NSString buttonName;
@property (nonatomic) Q schemaType;
@property (nonatomic) NSString url;
@property (nonatomic) NSString productID;
@property (nonatomic) Q platformSource;
@property (nonatomic) Q productType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)platformSource;
- (void)setButtonName:;
- (void)setPlatformSource:;
- (void)setSchemaType:;
- (id)productID;
- (void)setProductType:;
- (unsigned long long)productType;
- (id)url;
- (void)setProductID:;
- (void)setDisplayType:;
- (unsigned long long)displayType;
- (void)setUrl:;
- (void).cxx_destruct;
- (unsigned long long)schemaType;
- (id)buttonName;
+ (id)JSONKeyPathsByPropertyKey;
@end
