@interface IESLiveUserSettingResponse_UserSetting : IESLivePBBaseMessage
@property (nonatomic) BOOL setStatus;
@property (nonatomic) q userGiftSwitch;
@property (nonatomic) q userGiftOffReason;
@property (nonatomic) NSString failMessage;
@property (nonatomic) q anchorUserRelationSwitch;
@property (nonatomic) q liveVisitorSwitch;
+ (id)descriptor;
@end
