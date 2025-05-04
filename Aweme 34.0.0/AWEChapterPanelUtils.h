@interface AWEChapterPanelUtils : NSObject
+ (id)formatTimestamp:;
+ (id)getThumbnailImgUrlByModel:index:;
+ (double)heightForTextString:font:limitedWidth:limitedLines:;
+ (long long)linesWithAttributedString:limitedWidth:;
+ (BOOL)enableSmartChapterInteraction;
+ (BOOL)useNewThumbnailDataWithModel:;
+ (void)getVideoPreviewImageIndex:aweme:context:completion:;
+ (id)framePreviewImageForProgress:aweme:context:originalImage:;
+ (BOOL)enableNewThumbnailLogic;
@end
