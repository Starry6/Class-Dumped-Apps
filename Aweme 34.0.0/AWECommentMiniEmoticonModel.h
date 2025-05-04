@interface AWECommentMiniEmoticonModel : NSObject
@property (nonatomic) NSDictionary emojiRecommendRawDict;
@property (nonatomic) NSString emoticonIcon;
@property (nonatomic) NSString emoticonTitle;
- (id)emoticonTitle;
- (id)emoticonIcon;
- (BOOL)isEqualToEmoticon:;
- (id)initWithEmoticonIcon:emoticonTitle:;
- (void)setEmoticonIcon:;
- (void)setEmoticonTitle:;
- (id)emojiRecommendRawDict;
- (void)setEmojiRecommendRawDict:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithCoder:;
@end
