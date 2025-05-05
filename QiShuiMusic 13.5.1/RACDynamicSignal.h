@interface RACDynamicSignal : RACSignal
@property (nonatomic) @? didSubscribe;
- (id)didSubscribe;
- (id)subscribe:;
- (void).cxx_destruct;
+ (id)createSignal:;
@end
