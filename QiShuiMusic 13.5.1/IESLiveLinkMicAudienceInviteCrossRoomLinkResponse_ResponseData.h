@interface IESLiveLinkMicAudienceInviteCrossRoomLinkResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoomBattleProcessInfo processInfo;
@property (nonatomic) BOOL hasProcessInfo;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
