@interface TRIPBInt32Array : NSObject
@property (nonatomic) Q count;
- (void)removeAll;
- (id)init;
- (void)internalResizeToCapacity:;
- (int)valueAtIndex:;
- (void)dealloc;
- (void)insertValue:atIndex:;
- (void)enumerateValuesWithBlock:;
- (id)initWithValues:count:;
- (unsigned long long)hash;
- (void)addValuesFromArray:;
- (void)addValues:count:;
- (void)exchangeValueAtIndex:withValueAtIndex:;
- (void)enumerateValuesWithOptions:usingBlock:;
- (void)addValue:;
- (void)removeValueAtIndex:;
- (id)description;
- (id)initWithValueArray:;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (void)replaceValueAtIndex:withValue:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
+ (id)array;
+ (id)arrayWithValueArray:;
+ (id)arrayWithCapacity:;
+ (id)arrayWithValue:;
@end
