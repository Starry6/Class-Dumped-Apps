@interface AWECommentMediaDownloadConfig : AWEMediaDownloadConfig
@property (nonatomic) AWECommentMediaDownloadOptions commentDownloadOptions;
- (void)setCommentDownloadOptions:;
- (id)commentDownloadOptions;
- (id)imageDownloadURL;
- (void).cxx_destruct;
- (BOOL)shouldShowLoading;
+ (id)createConfigWithCommentOptions:;
@end
