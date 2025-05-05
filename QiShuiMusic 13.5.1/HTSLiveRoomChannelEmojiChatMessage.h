@interface HTSLiveRoomChannelEmojiChatMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q emojiId;
@property (nonatomic) HTSLiveText emojiContent;
@property (nonatomic) BOOL hasEmojiContent;
@property (nonatomic) NSString defaultContent;
@property (nonatomic) NSInteger showIdentity;
+ (id)descriptor;
@end
