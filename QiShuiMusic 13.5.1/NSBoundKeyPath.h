@interface NSBoundKeyPath : NSObject
@property (nonatomic) @ rootObject;
@property (nonatomic) NSString keyPath;
- (void)dealloc;
- (unsigned long long)hash;
- (void)setValue:;
- (id)rootObject;
- (id)keyPath;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:;
- (void)setRootObject:;
- (BOOL)validateValue:error:;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (id)mutableSetValue;
+ (BOOL)automaticallyNotifiesObserversForKey:;
+ (id)newKeyPathWithRootObject:keyPathString:;
+ (id)keyPathWithRootObject:path:;
@end
