@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk
@property (nonatomic) q emojiCount;
@property (nonatomic) NSArray inflectedEmojiList;
- (id)groupIdentifier;
- (id)encodedClassName;
- (long long)emojiCount;
- (void)setEmojiCount:;
- (id)inflectedEmojiList;
- (void)setInflectedEmojiList:;
+ (id)emojiParseChunk;
+ (id)emojiParseChunkWithDictionary:context:;
@end
