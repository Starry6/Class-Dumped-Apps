@interface LSBundleInfoCachedValues : LSPropertyList
@property (nonatomic) NSSet allKeys;
@property (nonatomic) NSDictionary rawValues;
- (id)init;
- (id)numberForKey:;
- (id)_initWithKeys:forDictionary:;
- (id)URLForKey:;
- (id)objectForKey:ofClass:valuesOfClass:;
- (id)allKeys;
- (id)objectForKey:ofType:;
- (BOOL)boolForKey:;
- (id)stringForKey:;
- (id)arrayForKey:withValuesOfClass:;
- (id)arrayForKey:;
- (id)dictionaryForKey:valuesOfClass:;
- (id)objectForKey:ofClass:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)rawValues;
- (id)objectsForKeys:;
- (id)_expensiveDictionaryRepresentation;
- (id)dictionaryForKey:;
- (id)copyWithZone:;
@end
