@interface HTSLiveRoomChannelGiftMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) BOOL hasRtfContent;
+ (id)descriptor;
@end
