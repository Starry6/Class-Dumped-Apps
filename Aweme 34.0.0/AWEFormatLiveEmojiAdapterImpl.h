@interface AWEFormatLiveEmojiAdapterImpl : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) IESLiveEmojiTextParser parser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isContainEmojiText:;
- (id)emojiItems;
- (id)parsePlainTextFromEmojiAttributedText:;
- (id)parseEmojiAttributedTextFromPlainText:;
- (BOOL)isOnlyEmojiText:;
- (long long)numberOfEmojiText:;
- (void)setupItems;
- (id)itemsWithLiveEmoticonModels:;
- (id)init;
- (id)items;
- (void)setItems:;
- (id)parser;
- (void).cxx_destruct;
- (void)setParser:;
@end
