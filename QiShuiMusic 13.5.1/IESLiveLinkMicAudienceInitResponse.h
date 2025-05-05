@interface IESLiveLinkMicAudienceInitResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicAudienceInitResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
