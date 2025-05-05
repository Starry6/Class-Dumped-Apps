@interface MTReflectUtil : NSObject
+ (BOOL)objectAsBool:;
+ (id)objectAsString:;
+ (id)objectAsArray:;
+ (id)objectAsDictionary:;
+ (id)mergeAndCleanDictionaries:;
+ (id)removeNullValuesFromDictionary:;
@end
