@interface SwitchChannelReplyResponse : IESLivePBBaseMessage
@property (nonatomic) SwitchChannelReplyResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
