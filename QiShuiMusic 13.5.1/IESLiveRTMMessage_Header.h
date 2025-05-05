@interface IESLiveRTMMessage_Header : IESLivePBBaseMessage
@property (nonatomic) NSString method;
@property (nonatomic) q msgId;
@property (nonatomic) q roomId;
@property (nonatomic) q createTime;
+ (id)descriptor;
@end
