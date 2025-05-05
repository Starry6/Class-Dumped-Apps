@interface JEAtomicCounter : NSObject
@property (nonatomic) q currentValue;
- (long long)decrement;
- (id)init;
- (id)initWithInitialValue:;
- (long long)currentValue;
- (unsigned long long)hash;
- (long long)increment;
- (id)description;
- (BOOL)isEqual:;
@end
