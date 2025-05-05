@interface ChannelChatResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q msgId;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString msgIdStr;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (nonatomic) HTSLiveText emojiContent;
@property (nonatomic) BOOL hasEmojiContent;
@property (nonatomic) NSString interactiveEmojiDisplayName;
@property (nonatomic) NSInteger showIdentity;
+ (id)descriptor;
@end
