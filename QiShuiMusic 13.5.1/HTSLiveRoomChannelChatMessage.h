@interface HTSLiveRoomChannelChatMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (nonatomic) NSInteger showIdentity;
@property (nonatomic) BOOL mention;
@property (nonatomic) HTSLiveText rtfContentV2;
@property (nonatomic) BOOL hasRtfContentV2;
+ (id)descriptor;
@end
