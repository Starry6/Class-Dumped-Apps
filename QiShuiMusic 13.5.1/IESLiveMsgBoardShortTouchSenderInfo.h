@interface IESLiveMsgBoardShortTouchSenderInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser sender;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) q msgDisappearTime;
+ (id)descriptor;
@end
