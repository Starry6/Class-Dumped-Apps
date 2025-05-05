@interface NSPersistentCacheRow : NSObject
- (id)knownKeyValuesPointer;
- (id)objectID;
- (void)dealloc;
- (unsigned long long)version;
- (BOOL)_isDeallocating;
- (id)initWithOptions:andTimestamp:;
- (id)release;
- (id)retain;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
+ (id)allocWithZone:;
@end
