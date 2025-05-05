@interface HTSLiveRoomBattleRoomInfo : IESLivePBBaseMessage
@property (nonatomic) NSString mixStartOperatorUserId;
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger joinStatus;
@property (nonatomic) NSString startOperatorOpenId;
- (id)mixStartOperatorUserId;
+ (id)descriptor;
@end
