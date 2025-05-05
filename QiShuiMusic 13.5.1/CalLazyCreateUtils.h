@interface CalLazyCreateUtils : NSObject
+ (void)addArray:toArray:;
+ (void)addObject:toArray:;
+ (void)setValue:withKey:inDictionary:;
+ (void)addObject:toSet:;
+ (void)addSet:toSet:;
+ (void)addArray:withKey:toDictionaryOfArrays:;
+ (void)addItem:withKey:toDictionaryOfArrays:;
+ (void)addArray:withKey:toDictionaryOfSets:;
+ (void)addItem:withKey:toDictionaryOfSets:;
+ (void)addSet:withKey:toDictionaryOfSets:;
+ (void)addArray:withKey:toStrongTableOfArrays:;
+ (void)addItem:withKey:toStrongTableOfArrays:;
@end
