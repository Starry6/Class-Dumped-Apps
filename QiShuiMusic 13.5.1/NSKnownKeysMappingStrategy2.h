@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1
- (id)init;
- (void)dealloc;
- (id)initForKeys:count:;
- (BOOL)_isDeallocating;
- (id)release;
- (id)retain;
- (BOOL)_tryRetain;
- (id)initForKeys:;
- (id)_setupForKeys:count:table:inData:;
- (unsigned long long)retainCount;
@end
