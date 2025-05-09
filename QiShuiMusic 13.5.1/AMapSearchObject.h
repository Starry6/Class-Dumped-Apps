@interface AMapSearchObject : NSObject
- (id)ajo_description;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)ajo_descriptionWithIndentation:;
- (void)ajo_didCreateObject:forKey:;
- (void)ajo_getClassName:protocols:fromTypeAttribute:;
- (void)ajo_ignoredSetValue:forUndefinedMappingKey:;
- (void)ajo_invalidValue:forArrayKey:error:;
- (void)ajo_invalidValue:forKey:error:;
- (BOOL)ajo_isClassTypeTypeAttribute:;
- (id)ajo_mapKey:;
- (id)ajo_mapValue:forKey:;
- (void)ajo_setValue:forKey:;
- (void)ajo_setValuesForKeysWithDictionary:;
- (id)ajo_typeAttributeForKey:;
- (void)ajo_validateArrayContent:forArrayKey:;
- (BOOL)ajo_validateArrayObject:forArrayKey:error:;
- (BOOL)ajo_validateAutomaticallyValue:forKey:;
- (BOOL)ajo_validateAutomaticallyValue:toClass:forKey:;
- (id)ajo_willCreateObjectOfClass:withDictionary:forKey:abort:;
- (BOOL)validate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)validateValue:forKey:error:;
- (id)formattedDescription;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_cachedArrayClassMapping;
+ (id)ajo_cachedMapping;
+ (id)ajo_cachedValueMappingForKey:;
+ (id)ajo_keyPaths;
+ (id)ajo_mapping;
+ (id)ajo_propertyKeys;
+ (id)ajo_propertyNames;
+ (BOOL)ajo_shouldSetUndefinedKeys;
+ (id)ajo_valueMappingForKey:;
@end
