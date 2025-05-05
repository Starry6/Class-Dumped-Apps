@interface CVNLPCaptionModelBase : CVNLPModelBase
@property (nonatomic) CVNLPCaptionRuntimeParameters runTimeParams;
- (void).cxx_destruct;
- (id)initWithOptions:runTimeParams:;
- (id)runTimeParams;
@end
