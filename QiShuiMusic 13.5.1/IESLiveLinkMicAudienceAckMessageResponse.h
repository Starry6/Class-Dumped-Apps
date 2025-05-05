@interface IESLiveLinkMicAudienceAckMessageResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicAudienceAckMessageResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
