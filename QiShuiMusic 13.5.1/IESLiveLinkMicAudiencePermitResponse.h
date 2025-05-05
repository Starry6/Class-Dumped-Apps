@interface IESLiveLinkMicAudiencePermitResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicAudiencePermitResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
