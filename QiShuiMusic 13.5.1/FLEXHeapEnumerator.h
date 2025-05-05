@interface FLEXHeapEnumerator : NSObject
+ (void)enumerateLiveObjectsUsingBlock:;
+ (void)updateRegisteredClasses;
+ (id)instancesOfClassWithName:retained:;
+ (id)objectsWithReferencesToObject:retained:;
+ (id)generateHeapSnapshot;
@end
