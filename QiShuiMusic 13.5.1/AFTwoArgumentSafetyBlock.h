@interface AFTwoArgumentSafetyBlock : NSObject
- (void)dealloc;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (id)initWithBlock:defaultValue1:defaultValue2:;
- (BOOL)invokeWithValue:andValue:;
@end
