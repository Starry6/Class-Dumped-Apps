@interface IESLiveMsgBoardItemInfo : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) HTSLiveUser sender;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger processStatus;
@property (nonatomic) q giftId;
@property (nonatomic) q msgDisappearTime;
+ (id)descriptor;
@end
