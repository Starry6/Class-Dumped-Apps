@interface RoomPublicScreenInfo : IESLivePBBaseMessage
@property (nonatomic) RoomPublicScreenAttachments attachments;
@property (nonatomic) BOOL hasAttachments;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSString longPressColor;
+ (id)descriptor;
@end
