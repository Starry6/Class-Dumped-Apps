@interface ASFBoxFilter : ASFImageFilter
@property (nonatomic) NSInteger count;
@property (nonatomic) <MTLBuffer> sumG;
- (void)configureArgumentTableWithCommandEncoder:param:;
- (void)initSumG;
- (void)setSumG:;
- (id)sumG;
- (void)setCount:;
- (void).cxx_destruct;
- (id)init:;
- (int)count;
+ (id)create:;
@end
