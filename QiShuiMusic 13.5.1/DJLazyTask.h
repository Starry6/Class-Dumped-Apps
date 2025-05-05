@interface DJLazyTask : NSObject
@property (nonatomic) NSObject target;
@property (nonatomic) NSObject param;
@property (nonatomic) : selector;
- (void)excute;
- (id)initWithTarget:selector:param:;
- (SEL)selector;
- (void)setSelector:;
- (unsigned long long)hash;
- (id)param;
- (void)setTarget:;
- (void)setParam:;
- (void).cxx_destruct;
- (id)target;
- (BOOL)isEqual:;
@end
