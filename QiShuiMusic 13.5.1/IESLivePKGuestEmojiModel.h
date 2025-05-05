@interface IESLivePKGuestEmojiModel : NSObject
@property (nonatomic) HTSLiveLinkmicAudienceEmoji originEmoji;
@property (nonatomic) NSString emojiID;
- (id)emojiID;
- (void)setOriginEmoji:;
- (id)emojiShowTimems;
- (id)emojiIDNumber;
- (id)emojiName;
- (id)emojiResultTimems;
- (id)initWithPBEmoji:;
- (BOOL)isRandom;
- (id)originEmoji;
- (void)setEmojiID:;
- (id)permission;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)category;
- (id)dynamicImage;
- (id)staticImage;
+ (id)emojiWithPB:;
+ (id)pbWithEmoji:;
@end
