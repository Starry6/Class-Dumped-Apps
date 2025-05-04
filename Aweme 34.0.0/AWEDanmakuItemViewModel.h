@interface AWEDanmakuItemViewModel : NSObject
+ (BOOL)shouldDiggImageOvertWithModel:;
+ (void)configEmojiWithContent:emoticonRegex:font:;
+ (void)configOfficialDanmakuWithContent:danmakuModel:font:isFullScreen:;
@end
