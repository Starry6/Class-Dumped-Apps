@interface AWEIMMessageEmojiConfigModel : AWEBaseApiModel
@property (nonatomic) AWEIMMessageEmojiConfig singleMsgEmoji;
@property (nonatomic) NSArray multiMsgEmoji;
@property (nonatomic) q msgEmojiGuideTimesLimitPerDay;
@property (nonatomic) BOOL closeMsgEmojiInnerPush;
@property (nonatomic) q perMsgEmojiInnerPushLimit;
- (id)singleMsgEmoji;
- (long long)perMsgEmojiInnerPushLimit;
- (void)setSingleMsgEmoji:;
- (id)multiMsgEmoji;
- (void)setMultiMsgEmoji:;
- (long long)msgEmojiGuideTimesLimitPerDay;
- (void)setMsgEmojiGuideTimesLimitPerDay:;
- (BOOL)closeMsgEmojiInnerPush;
- (void)setCloseMsgEmojiInnerPush:;
- (void)setPerMsgEmojiInnerPushLimit:;
- (void).cxx_destruct;
+ (id)singleMsgEmojiJSONTransformer;
+ (id)multiMsgEmojiJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
