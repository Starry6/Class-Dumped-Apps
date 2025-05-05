@interface IESLiveSaaSPBMsgBoardItemInfo : GPBMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) IESLiveSaaSPBUser sender;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger processStatus;
@property (nonatomic) q giftId;
@property (nonatomic) q msgDisappearTime;
+ (id)descriptor;
@end
