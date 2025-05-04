@interface AWEIMAddCustomEmoticonShareChannel : AWEShareBaseChannel
- (void)shareWithCompletion:;
- (id)shareImage;
- (BOOL)prepareToShare;
- (long long)shareCategory;
- (id)albumImagePickerViewController;
- (BOOL)canDownLoad;
- (BOOL)canShowDownLoadWithContext:;
- (id)prepareDownloadOptions;
- (BOOL)isShareItemEnabled;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (void)trackAddEmojiWithContext:;
@end
