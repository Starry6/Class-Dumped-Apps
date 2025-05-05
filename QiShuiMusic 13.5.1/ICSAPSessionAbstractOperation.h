@interface ICSAPSessionAbstractOperation : ICAsyncOperation
@property (nonatomic) ICSAPSession sapSession;
- (void)execute;
- (void)setSapSession:;
- (void)executeWithSAPContext:;
- (void)finishWithSAPContextPreparationError:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)sapSession;
@end
