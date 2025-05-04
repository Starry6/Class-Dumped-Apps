@interface AWEShareCommentAsStoryHandler : NSObject
+ (void)shareAsStoryWithParamsModel:completion:;
+ (id)canvasSourceWithVideoSize:playerSize:defaultVideoScale:minimumScale:maximumScale:;
+ (double)addInfoStickerWithTextForComment:commenter:atUserText:videoSize:videoScale:playerSize:editorConfig:;
+ (id)createCommentLabel;
+ (void)addAddAttributeForString:font:;
+ (double)calculateContentHeightForComment:commentWidth:;
@end
