@interface IESLiveLinkMicAudienceGetPaidLinkmicExplainCardInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) BOOL needShow;
@property (nonatomic) IESLivePaidLinkmicExplainCardInfo explainCardInfo;
@property (nonatomic) BOOL hasExplainCardInfo;
+ (id)descriptor;
@end
