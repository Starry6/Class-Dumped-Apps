@interface NSKeyValueAccessor : NSObject
- (SEL)selector;
- (void)dealloc;
- (id)key;
- (id)initWithContainerClassID:key:implementation:selector:extraArguments:count:;
- (id)containerClassID;
- (unsigned long long)extraArgumentCount;
- (id)extraArgument1;
- (id)extraArgument2;
@end
