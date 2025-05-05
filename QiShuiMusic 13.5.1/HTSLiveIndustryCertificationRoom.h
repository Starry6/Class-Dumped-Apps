@interface HTSLiveIndustryCertificationRoom : IESLivePBBaseMessage
@property (nonatomic) HTSLiveIndustryCertificationRoom_RoomOwner roomOwner;
@property (nonatomic) BOOL hasRoomOwner;
+ (id)descriptor;
@end
