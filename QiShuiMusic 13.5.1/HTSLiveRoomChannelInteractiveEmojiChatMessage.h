@interface HTSLiveRoomChannelInteractiveEmojiChatMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString interactiveEmojiDisplayName;
@property (nonatomic) NSString defaultContent;
@property (nonatomic) NSInteger showIdentity;
+ (id)descriptor;
@end
