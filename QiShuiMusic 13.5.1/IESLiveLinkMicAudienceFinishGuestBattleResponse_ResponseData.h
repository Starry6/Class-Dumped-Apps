@interface IESLiveLinkMicAudienceFinishGuestBattleResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGuestBattleInfo guestBattleInfo;
@property (nonatomic) BOOL hasGuestBattleInfo;
+ (id)descriptor;
@end
