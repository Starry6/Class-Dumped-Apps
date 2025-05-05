@interface IESLiveLinkMicAudienceInviteCrossRoomLinkListResponse_RoomList : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray roomsArray;
@property (nonatomic) Q roomsArray_Count;
@property (nonatomic) NSInteger listType;
+ (id)descriptor;
@end
