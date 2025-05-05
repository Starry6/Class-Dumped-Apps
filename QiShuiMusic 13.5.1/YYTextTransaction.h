@interface YYTextTransaction : NSObject
@property (nonatomic) @ target;
@property (nonatomic) : selector;
- (void)commit;
- (SEL)selector;
- (void)setSelector:;
- (unsigned long long)hash;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (BOOL)isEqual:;
+ (id)transactionWithTarget:selector:;
@end
