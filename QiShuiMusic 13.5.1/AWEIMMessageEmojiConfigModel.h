@interface AWEIMMessageEmojiConfigModel : IESIMBaseApiModel
@property (nonatomic) AWEIMMessageEmojiConfig singleMsgEmoji;
@property (nonatomic) NSArray multiMsgEmoji;
@property (nonatomic) q msgEmojiGuideTimesLimitPerDay;
@property (nonatomic) BOOL closeMsgEmojiInnerPush;
@property (nonatomic) q perMsgEmojiInnerPushLimit;
- (BOOL)closeMsgEmojiInnerPush;
- (long long)msgEmojiGuideTimesLimitPerDay;
- (id)multiMsgEmoji;
- (long long)perMsgEmojiInnerPushLimit;
- (void)setCloseMsgEmojiInnerPush:;
- (void)setMsgEmojiGuideTimesLimitPerDay:;
- (void)setMultiMsgEmoji:;
- (void)setPerMsgEmojiInnerPushLimit:;
- (void)setSingleMsgEmoji:;
- (id)singleMsgEmoji;
- (void).cxx_destruct;
+ (id)multiMsgEmojiJSONTransformer;
+ (id)singleMsgEmojiJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
