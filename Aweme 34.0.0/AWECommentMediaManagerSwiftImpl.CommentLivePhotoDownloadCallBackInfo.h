@interface AWECommentMediaManagerSwiftImpl.CommentLivePhotoDownloadCallBackInfo : NSObject
@property (nonatomic) PHLivePhoto livePhoto;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) NSString resourceID;
@property (nonatomic) NSError error;
@property (nonatomic) NSURL videoPathURL;
@property (nonatomic) NSURL imagePathURL;
- (void)setCoverImage:;
- (id)videoPathURL;
- (void)setVideoPathURL:;
- (id)resourceID;
- (id)init;
- (void)setError:;
- (id)livePhoto;
- (void)setResourceID:;
- (void).cxx_destruct;
- (id)error;
- (void)setLivePhoto:;
- (id)coverImage;
- (id)imagePathURL;
- (void)setImagePathURL:;
@end
