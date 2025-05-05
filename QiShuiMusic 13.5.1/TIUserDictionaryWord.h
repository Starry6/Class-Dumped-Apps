@interface TIUserDictionaryWord : NSObject
+ (id)managedObjectModelURL;
+ (long long)validateTransaction:existingEntries:;
+ (BOOL)userWord:duplicatesTarget:andShortcut:;
@end
