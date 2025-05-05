@interface CNStack : NSObject
@property (nonatomic) @ peek;
@property (nonatomic) Q count;
- (id)pop;
- (void)push:;
- (void)popAllWithHandler:;
- (id)init;
- (id)peek;
- (void)popWithHandler:;
- (id)popAll;
- (void)removeObject:;
- (void).cxx_destruct;
- (unsigned long long)count;
@end
