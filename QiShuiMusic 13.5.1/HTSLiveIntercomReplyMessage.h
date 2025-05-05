@interface HTSLiveIntercomReplyMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q channelId;
@property (nonatomic) q replyStatus;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
