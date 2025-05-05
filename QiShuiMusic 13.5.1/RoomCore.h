@interface RoomCore : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) q anchorId;
+ (id)descriptor;
@end
