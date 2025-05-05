@interface HTSLiveChannelNoticeContent : IESLivePBBaseMessage
@property (nonatomic) q channelId;
@property (nonatomic) NSInteger action;
@property (nonatomic) NSString extraInfo;
+ (id)descriptor;
@end
