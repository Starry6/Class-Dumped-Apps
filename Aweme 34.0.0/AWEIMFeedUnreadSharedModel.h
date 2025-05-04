@interface AWEIMFeedUnreadSharedModel : AWEBaseApiModel
@property (nonatomic) NSArray shareRecordsArray;
@property (nonatomic) NSArray smartEmojisArray;
@property (nonatomic) AWEIMSmartEmojiExtraModel smartEmojiExtra;
- (id)shareRecordsArray;
- (void)setShareRecordsArray:;
- (id)smartEmojisArray;
- (void)setSmartEmojisArray:;
- (id)smartEmojiExtra;
- (void)setSmartEmojiExtra:;
- (void).cxx_destruct;
+ (id)shareRecordsArrayJSONTransformer;
+ (id)smartEmojiExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
