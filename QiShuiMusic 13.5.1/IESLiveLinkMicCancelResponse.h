@interface IESLiveLinkMicCancelResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicCancelResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
