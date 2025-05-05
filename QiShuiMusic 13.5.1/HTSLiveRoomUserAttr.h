@interface HTSLiveRoomUserAttr : IESLivePBBaseMessage
@property (nonatomic) q adminFlag;
@property (nonatomic) q roomId;
@property (nonatomic) NSString roomIdStr;
@property (nonatomic) q silenceFlag;
@property (nonatomic) q rank;
+ (id)descriptor;
@end
