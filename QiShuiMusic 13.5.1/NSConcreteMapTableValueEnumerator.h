@interface NSConcreteMapTableValueEnumerator : NSEnumerator
- (id)nextObject;
- (void)dealloc;
+ (id)enumeratorWithMapTable:;
@end
