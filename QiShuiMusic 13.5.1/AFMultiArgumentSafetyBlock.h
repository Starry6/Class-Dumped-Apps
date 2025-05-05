@interface AFMultiArgumentSafetyBlock : NSObject
- (BOOL)invoke;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (id)initWithBlock:defaultValues:;
- (id)initWithBlock:defaultValueArray:;
- (BOOL)invokeWithValues:;
- (BOOL)invokeWithValueArray:;
@end
