@interface AWERootModelJSONAdapter : NSObject
@property (nonatomic) NSDictionary propertyInfosMap;
@property (nonatomic) NSDictionary keyPathToPropertyInfoMap;
@property (nonatomic) NSDictionary propertyValueTransformersMap;
- (id)modelWithClass:JSONDictionary:sharedModelInfos:;
- (id)propertyInfosMap;
- (void)setPropertyInfosMap:;
- (void)generateMaps;
- (id)propertyValueTransformersMap;
- (id)keyPathToPropertyInfoMap;
- (void)setKeyPathToPropertyInfoMap:;
- (void)setPropertyValueTransformersMap:;
- (void).cxx_destruct;
- (id)JSONDictionaryFromModel:;
+ (id)adapterWithPropertyInfosMap:;
@end
