@interface AWEDPSchemaQueryRule : MTLModel
@property (nonatomic) NSArray includes;
@property (nonatomic) NSArray excludes;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIncludes:;
- (BOOL)validateQueryVal:;
- (id)excludes;
- (void)setExcludes:;
- (void).cxx_destruct;
- (id)includes;
+ (id)JSONKeyPathsByPropertyKey;
@end
