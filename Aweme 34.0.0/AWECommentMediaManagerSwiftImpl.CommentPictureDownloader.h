@interface AWECommentMediaManagerSwiftImpl.CommentPictureDownloader : NSObject
- (id)init;
+ (void)savePictureToAlbumFor:mediaType:atIndex:;
+ (BOOL)canDownloadPictureFor:;
+ (id)obtainAbsolutePath:;
+ (void)createLivePhoto:imageUrl:completion:;
+ (void)obtainLivePhotoResource:imageUrl:placeholderImage:completion:;
@end
