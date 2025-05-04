@interface AWEPOICommonEntryModel : MTLModel
@property (nonatomic) Q schemaType;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSchemaType:;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (unsigned long long)schemaType;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
