@interface IESLiveLinkMicAudienceReplyResponse_EarlyJoinChannelData : IESLivePBBaseMessage
@property (nonatomic) BOOL alreadyJoinChannel;
@property (nonatomic) IESLiveLinkMicAudienceJoinChannelResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
