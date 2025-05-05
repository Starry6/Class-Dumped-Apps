@interface PETEventStringValidator : NSObject
+ (BOOL)dictionaryContainsValidStrings:;
+ (BOOL)setContainsValidStrings:;
+ (id)sanitizedDictionary:;
+ (id)sanitizedSet:;
+ (BOOL)stringIsValid:;
+ (id)sanitizedString:;
@end
