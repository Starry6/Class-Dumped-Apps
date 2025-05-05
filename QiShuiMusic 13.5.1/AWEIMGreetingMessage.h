@interface AWEIMGreetingMessage : AWEIMMessage
@property (nonatomic) NSArray jokerStickers;
@property (nonatomic) NSArray greetingStickers;
@property (nonatomic) NSString fromUserNickName;
@property (nonatomic) NSArray stickers;
@property (nonatomic) NSArray locoalGifFromStorage;
@property (nonatomic) NSString title;
- (id)fromUserNickName;
- (id)getContentDict;
- (id)greetingStickers;
- (id)initWithContentDict:;
- (id)initWithIMStorageStickers:;
- (id)jokerStickers;
- (id)locoalGifFromStorage;
- (void)setFromUserNickName:;
- (void)setGreetingStickers:;
- (void)setJokerStickers:;
- (void)setLocoalGifFromStorage:;
- (id)transStickersByArray:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)stickers;
@end
