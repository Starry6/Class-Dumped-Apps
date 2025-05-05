@interface ASFCalcGammaFilter : ASFImageFilter
@property (nonatomic) <MTLBuffer> sumG;
- (void)configureArgumentTableWithCommandEncoder:param:;
- (void)setSumG:;
- (id)sumG;
- (void).cxx_destruct;
- (id)init:;
+ (id)create:;
@end
