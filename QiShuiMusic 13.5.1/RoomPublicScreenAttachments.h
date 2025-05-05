@interface RoomPublicScreenAttachments : IESLivePBBaseMessage
@property (nonatomic) q hotMessageTray;
@property (nonatomic) q heightSetting;
@property (nonatomic) q firstMessageShowOpt;
@property (nonatomic) q anchorColdMessageShowOpt;
+ (id)descriptor;
@end
