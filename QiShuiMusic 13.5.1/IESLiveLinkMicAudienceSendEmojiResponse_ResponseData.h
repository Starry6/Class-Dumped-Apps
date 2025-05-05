@interface IESLiveLinkMicAudienceSendEmojiResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkMicSendEmojiMessage emojiMsg;
@property (nonatomic) BOOL hasEmojiMsg;
+ (id)descriptor;
@end
