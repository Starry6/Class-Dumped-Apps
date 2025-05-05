@interface IESLiveSaaSPBSendInteractEmojiConfig : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage interactEmoji;
@property (nonatomic) BOOL hasInteractEmoji;
@property (nonatomic) q durationMs;
@property (nonatomic) q start;
@property (nonatomic) IESLiveSaaSPBImage ownEmoji;
@property (nonatomic) BOOL hasOwnEmoji;
@property (nonatomic) q ownEmojiDurationMs;
@property (nonatomic) q offset;
@property (nonatomic) q scaleUp;
@property (nonatomic) BOOL reshape;
@property (nonatomic) NSString soundURL;
@property (nonatomic) q reshapeStart;
+ (id)descriptor;
@end
