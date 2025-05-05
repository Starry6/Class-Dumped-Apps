@interface IESLivePublicScreenCommonMessageParser : NSObject
@property (nonatomic) <IESLiveEmojiTextParserAdapter> emojiTextParser;
@property (nonatomic) <IESLiveWebImageService> webImageService;
- (id)emojiTextParser;
- (id)webImageService;
- (id)getGiftIconURLWithGiftID:;
- (id)getSensitiveNicknameWithUser:;
- (void)setEmojiTextParser:;
- (void)setWebImageService:;
- (id)init;
- (void).cxx_destruct;
@end
