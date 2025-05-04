@interface AWEPOIServiceSpuEntryModel : MTLModel
@property (nonatomic) Q schemaType;
@property (nonatomic) NSString url;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) Q entryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSchemaType:;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (unsigned long long)entryType;
- (unsigned long long)schemaType;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (void)setTitle:;
- (void)setEntryType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
