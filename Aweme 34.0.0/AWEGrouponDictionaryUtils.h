@interface AWEGrouponDictionaryUtils : NSObject
+ (id)keyPathSubWithIndex:keyPath:;
+ (id)replaceValueForKeyPath:inDictionary:withValue:onlyIfNull:coverType:replaceResult:;
+ (BOOL)isDictionary:aSubsetOfDictionary:;
+ (id)findNestedValueInDict:withKeyPath:;
@end
