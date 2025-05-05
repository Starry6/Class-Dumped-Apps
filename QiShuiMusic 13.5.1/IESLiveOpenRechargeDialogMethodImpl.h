@interface IESLiveOpenRechargeDialogMethodImpl : IESLiveOpenRechargeDialogMethod
@property (nonatomic) BOOL hasDealtHandlerBefore;
@property (nonatomic) BOOL hasChargedSuccess;
- (void)callWithParamModel:completionHandler:;
- (BOOL)hasChargedSuccess;
- (BOOL)hasDealtHandlerBefore;
- (void)p_dealCompletionHandlerAfterCharge:completionHandler:;
- (void)setHasChargedSuccess:;
- (void)setHasDealtHandlerBefore:;
@end
