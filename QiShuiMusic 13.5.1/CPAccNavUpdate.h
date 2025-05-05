@interface CPAccNavUpdate : NSObject
+ (id)description:;
+ (BOOL)isUpdate:equalTo:;
+ (void)resetUpdate:;
+ (void)configureTypesForUpdateClass:;
+ (id)update:valueForProperty:;
+ (id)update:valueForKey:;
+ (id)updateClass:paramForProperty:;
+ (id)updateClass:paramKeyForKey:;
+ (id)update:valueForParam:;
+ (id)update:valueForParamKey:;
+ (id)_valueFromMeasurement:forParamKey:;
+ (id)_valueFromCollection:forParamKey:;
+ (void)enumerateUpdateClass:paramsWithBlock:;
+ (void)enumerateUpdateClass:paramKeysWithBlock:;
+ (void)enumerateUpdate:paramsAndValuesWithBlock:;
+ (void)enumerateUpdate:paramKeysAndValuesWithBlock:;
+ (id)dictionaryIAPFormat:;
+ (id)dictionaryStringFormat:;
+ (id)_dictionaryFormat:resolveEnums:;
+ (id)iapDescription:;
+ (id)_descriptionArray:resolveEnums:showNils:prefix:;
+ (id)_formattedDistanceString:;
+ (id)copyUpdate:;
+ (void)decodeUpdate:withCoder:;
+ (void)encodeUpdate:withCoder:;
@end
