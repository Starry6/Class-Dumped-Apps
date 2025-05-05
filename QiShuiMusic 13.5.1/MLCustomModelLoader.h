@interface MLCustomModelLoader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)parametersFromCustomModelSpec:error:;
+ (id)customModelWithName:modelDescription:modelConfiguration:parameterDictionary:error:;
@end
