@interface JSONKeyMapper : NSObject
@property (nonatomic) @? JSONToModelKeyBlock;
@property (nonatomic) @? modelToJSONKeyBlock;
- (id)JSONToModelKeyBlock;
- (id)convertValue:;
- (id)convertValue:isImportingToModel:;
- (id)initWithJSONToModelBlock:modelToJSONBlock:;
- (id)initWithModelToJSONBlock:;
- (id)initWithModelToJSONDictionary:;
- (id)modelToJSONKeyBlock;
- (id)initWithDictionary:;
- (void).cxx_destruct;
+ (id)baseMapper:withModelToJSONExceptions:;
+ (id)mapper:withExceptions:;
+ (id)mapperForSnakeCase;
+ (id)mapperForTitleCase;
+ (id)mapperFromUnderscoreCaseToCamelCase;
+ (id)mapperFromUpperCaseToLowerCase;
+ (id)swapKeysAndValuesInDictionary:;
@end
