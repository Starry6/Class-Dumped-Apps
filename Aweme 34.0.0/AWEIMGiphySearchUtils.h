@interface AWEIMGiphySearchUtils : NSObject
+ (BOOL)enableGifTabMerge;
+ (BOOL)enableOffenSearchTag;
+ (id)emoticonsWithCategory:;
+ (void)asyncLoadEmoticonsWithCategory:completion:;
+ (id)titleWithCategory:;
+ (void)p_loadGifDataWithCompletion:;
@end
