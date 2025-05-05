@interface AFThreeArgumentSafetyBlock : NSObject
- (void)dealloc;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (id)initWithBlock:defaultValue1:defaultValue2:defaultValue3:;
- (BOOL)invokeWithValue:andValue:andValue:;
@end
