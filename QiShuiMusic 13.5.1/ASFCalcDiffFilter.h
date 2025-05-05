@interface ASFCalcDiffFilter : ASFImageFilter
- (void)configureArgumentTableWithCommandEncoder:param:;
- (id)getExecPipeline:;
- (id)initWithRadius:;
+ (id)create:;
@end
