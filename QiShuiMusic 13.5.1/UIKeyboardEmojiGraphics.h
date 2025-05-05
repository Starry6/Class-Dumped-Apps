@interface UIKeyboardEmojiGraphics : NSObject
- (id)init;
+ (id)sharedInstance;
+ (BOOL)boldText;
+ (id)emojiFontAttributesForPortrait:;
+ (id)emojiFontAttributes;
+ (BOOL)isWildcatKeyboard;
+ (id)emojiSize:;
+ (unsigned char)rowCount:;
+ (unsigned char)colCount:;
+ (id)margin:;
+ (double)recentLableVerticalPadding:;
+ (id)padding:;
+ (double)optionalDescriptionPadding:;
+ (double)emojiPageControlYOffset:;
+ (id)emojiCategoryImagePath:forRenderConfig:;
@end
