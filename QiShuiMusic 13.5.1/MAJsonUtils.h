@interface MAJsonUtils : NSObject
+ (id)allPropertiesOfClass:;
+ (Class)classOfPropertyNamed:ofClass:;
+ (BOOL)isValidJsonValue:;
+ (id)jsonDataFromModel:;
+ (id)jsonObjectFromData:;
+ (id)jsonObjectFromModel:;
+ (id)jsonStringFromModel:;
+ (id)jsonValueFromObject:;
+ (id)modelFromDict:modelClass:;
+ (id)modelFromJsonWithData:modelClass:;
+ (id)modelFromJsonWithString:modelClass:;
@end
