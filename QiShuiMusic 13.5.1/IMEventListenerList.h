@interface IMEventListenerList : NSObject
- (id)init;
- (BOOL)containsObject:;
- (void)addObject:;
- (void)removeObject:;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:;
- (unsigned long long)count;
@end
