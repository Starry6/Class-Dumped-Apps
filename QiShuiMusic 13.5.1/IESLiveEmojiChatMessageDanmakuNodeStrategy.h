@interface IESLiveEmojiChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy
@property (nonatomic) HTSLiveEmojiChatMessage emojiChatMessage;
@property (nonatomic) NSString emojiImageURL;
- (void)AsyncBuildNode:;
- (id)buildNodeBasePart;
- (long long)buildingMode;
- (id)emojiChatMessage;
- (id)emojiImageURL;
- (void)setEmojiChatMessage:;
- (void)setEmojiImageURL:;
- (BOOL)filter;
- (void).cxx_destruct;
- (id)buildNode;
@end
