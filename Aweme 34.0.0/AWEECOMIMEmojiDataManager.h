@interface AWEECOMIMEmojiDataManager : NSObject
@property (nonatomic) NSArray emojiDataSource;
@property (nonatomic) NSDictionary emojiDict;
@property (nonatomic) <IESIMEmoticonManager> emoticonManager;
- (void)replaceEmojiForAttributedString:font:displayType:;
- (id)emojiDict;
- (id)emojiWithEmojiDescription:;
- (id)emoticonManager;
- (id)matchingEmojiForString:;
- (id)emojiAttributeForYYLabelWithStickerMatchingResult:font:;
- (id)emojiAttributeForSystemUIWithStickerMatchingResult:font:;
- (id)emojiDataSource;
- (void)setEmojiDataSource:;
- (void)setEmojiDict:;
- (void)setEmoticonManager:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
