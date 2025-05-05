@interface OperateGroupMemberStageStatusReq : IESLivePBBaseMessage
@property (nonatomic) q memberId;
@property (nonatomic) NSInteger stageStatus;
@property (nonatomic) q roomId;
+ (id)descriptor;
@end
