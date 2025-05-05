@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation
@property (nonatomic) NSData data;
@property (nonatomic) @? responseHandler;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)data;
- (void)executeWithSAPContext:;
- (void)finishWithSAPContextPreparationError:;
- (void).cxx_destruct;
- (void)setData:;
@end
