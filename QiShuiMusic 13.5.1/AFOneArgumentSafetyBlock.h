@interface AFOneArgumentSafetyBlock : NSObject
- (void)dealloc;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (id)initWithBlock:defaultValue:;
- (BOOL)invokeWithValue:;
@end
