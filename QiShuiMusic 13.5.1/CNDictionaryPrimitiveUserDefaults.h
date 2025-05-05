@interface CNDictionaryPrimitiveUserDefaults : NSObject
@property (nonatomic) Q synchronizeCount;
@property (nonatomic) Q setupAutosyncCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)primitiveObjectForKey:;
- (BOOL)primitiveBoolValueForKey:keyExists:;
- (id)init;
- (void)primitiveRemoveObjectForKey:;
- (void)setupAutosync;
- (long long)primitiveIntegerValueForKey:keyExists:;
- (void)setPrimitiveObject:forKey:;
- (BOOL)synchronize;
- (unsigned long long)synchronizeCount;
- (void).cxx_destruct;
- (unsigned long long)setupAutosyncCount;
@end
