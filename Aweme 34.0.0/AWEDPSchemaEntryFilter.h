@interface AWEDPSchemaEntryFilter : MTLModel
@property (nonatomic) NSArray includes;
@property (nonatomic) NSArray excludes;
@property (nonatomic) NSDictionary paramValidator;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIncludes:;
- (id)excludes;
- (void)setExcludes:;
- (id)paramValidator;
- (void)setParamValidator:;
- (void).cxx_destruct;
- (id)validate:;
- (id)includes;
+ (id)paramValidatorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
