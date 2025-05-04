@interface AWEHashTagHelper : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emojiRegularExpression;
+ (id)emojiRegex;
+ (id)hashTagRegExp;
+ (id)endWithHashTagRegExp;
+ (id)resolveHashTagsWithText:;
+ (void)handleHashTags:withSpecialHashtags:withPlainText:;
+ (id)validHashTagCharset;
@end
