@interface HTSLiveCrossRoomLinkReplyGuestInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) BOOL isLowClientVersion;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isNotSupportApp;
@property (nonatomic) NSString userIdStr;
+ (id)descriptor;
@end
