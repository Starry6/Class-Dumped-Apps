@interface AWEPOIRankModel : MTLModel
@property (nonatomic) NSString rankCode;
@property (nonatomic) NSString rankDescription;
@property (nonatomic) NSString schemaType;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) Q rankListType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSchemaType:;
- (void)setSchemaURL:;
- (id)schemaURL;
- (id)rankDescription;
- (void)setRankDescription:;
- (id)rankCode;
- (void)setRankCode:;
- (unsigned long long)rankListType;
- (void)setRankListType:;
- (id)schemaType;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
