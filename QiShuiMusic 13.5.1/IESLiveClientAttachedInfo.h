@interface IESLiveClientAttachedInfo : IESLivePBBaseMessage
@property (nonatomic) NSString pointTag;
@property (nonatomic) NSString imprId;
@property (nonatomic) NSString inviteMode;
@property (nonatomic) NSString listNum;
@property (nonatomic) NSString inviterRoomStatus;
@property (nonatomic) NSString inviterConnectCnt;
+ (id)descriptor;
@end
