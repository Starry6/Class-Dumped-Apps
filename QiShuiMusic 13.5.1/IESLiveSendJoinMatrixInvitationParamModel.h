@interface IESLiveSendJoinMatrixInvitationParamModel : IESLiveBridgeModel
@property (nonatomic) NSString msgContent;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) NSString inviteToken;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString secUid;
- (void)setInviteToken:;
- (id)inviteToken;
- (id)msgContent;
- (id)pushDetail;
- (id)secUid;
- (void)setMsgContent:;
- (void)setPushDetail:;
- (void)setSecUid:;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
+ (id)modelCustomPropertyMapper;
@end
