@interface JEAtomicObject : NSObject
@property (nonatomic) @ value;
- (id)init;
- (id)initWithInitialValue:;
- (unsigned long long)hash;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
@end
