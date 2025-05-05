@interface RoomInteractionInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLikeIconInfo likeIconInfo;
@property (nonatomic) BOOL hasLikeIconInfo;
@property (nonatomic) HTSLiveChatEmojiGuideInfo chatEmojiGuideInfo;
@property (nonatomic) BOOL hasChatEmojiGuideInfo;
@property (nonatomic) HTSLiveChatImageGuideInfo chatImageGuideInfo;
@property (nonatomic) BOOL hasChatImageGuideInfo;
@property (nonatomic) HTSLiveMatchChatInfo matchChatInfo;
@property (nonatomic) BOOL hasMatchChatInfo;
@property (nonatomic) HTSLiveRecommendShortcutEmoji recommendShortcutEmoji;
@property (nonatomic) BOOL hasRecommendShortcutEmoji;
@property (nonatomic) HTSLiveFrequentlyChatInfo frequentlyChatInfo;
@property (nonatomic) BOOL hasFrequentlyChatInfo;
@property (nonatomic) HTSLiveChatInputPanel chatInputPanel;
@property (nonatomic) BOOL hasChatInputPanel;
@property (nonatomic) HTSLiveFusionEmojiBanList fusionEmojiBanList;
@property (nonatomic) BOOL hasFusionEmojiBanList;
@property (nonatomic) HTSLiveMsgOptPanel msgOptPanel;
@property (nonatomic) BOOL hasMsgOptPanel;
+ (id)descriptor;
@end
