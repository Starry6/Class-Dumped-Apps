@interface AWEStudioPromiseExecutor : NSObject
@property (nonatomic) @ value;
@property (nonatomic) @? promiseEnumerator;
- (id)initWithInitialValue:promiseEnumerator:;
- (id)promiseEnumerator;
- (id)initWithInitialValue:promises:;
- (void)setPromiseEnumerator:;
- (id)value;
- (void)setValue:;
- (void)execute:;
- (void).cxx_destruct;
+ (void)iterator:value:completion:;
@end
