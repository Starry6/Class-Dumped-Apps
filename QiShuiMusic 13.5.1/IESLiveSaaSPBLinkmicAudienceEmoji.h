@interface IESLiveSaaSPBLinkmicAudienceEmoji : GPBMessage
@property (nonatomic) q emojiId;
@property (nonatomic) BOOL isRandom;
@property (nonatomic) IESLiveSaaSPBImage emojiImage;
@property (nonatomic) BOOL hasEmojiImage;
@property (nonatomic) IESLiveSaaSPBImage emojiDynamicImage;
@property (nonatomic) BOOL hasEmojiDynamicImage;
@property (nonatomic) NSString emojiName;
@property (nonatomic) q animationDurationMs;
@property (nonatomic) q emojiResultDurationMs;
@property (nonatomic) NSInteger type;
@property (nonatomic) IESLiveSaaSPBEmojiPermission permission;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) NSString emojiSound;
@property (nonatomic) IESLiveSaaSPBEmojiInteractResource interactResource;
@property (nonatomic) BOOL hasInteractResource;
@property (nonatomic) NSInteger categoryType;
@property (nonatomic) BOOL needReverse;
@property (nonatomic) IESLiveSaaSPBEmojiTag emojiTag;
@property (nonatomic) BOOL hasEmojiTag;
@property (nonatomic) NSInteger emojiStatus;
@property (nonatomic) NSString emojiIdStr;
@property (nonatomic) NSString emojiLabel;
@property (nonatomic) BOOL disable;
@property (nonatomic) IESLiveSaaSPBEmojiCustomizedRandomResource customizedRandomResource;
@property (nonatomic) BOOL hasCustomizedRandomResource;
+ (id)descriptor;
@end
