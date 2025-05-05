@interface NSConcreteArrayChange : NSArrayChange
- (unsigned long long)changeType;
- (void)dealloc;
- (id)value;
- (id)initWithType:sourceIndex:destinationIndex:value:;
- (unsigned long long)sourceIndex;
- (unsigned long long)destinationIndex;
@end
