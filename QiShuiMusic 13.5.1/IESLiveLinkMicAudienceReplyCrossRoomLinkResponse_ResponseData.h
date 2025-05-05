@interface IESLiveLinkMicAudienceReplyCrossRoomLinkResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray guestInfosArray;
@property (nonatomic) Q guestInfosArray_Count;
@property (nonatomic) HTSLiveRoomBattleProcessInfo processInfo;
@property (nonatomic) BOOL hasProcessInfo;
+ (id)descriptor;
@end
