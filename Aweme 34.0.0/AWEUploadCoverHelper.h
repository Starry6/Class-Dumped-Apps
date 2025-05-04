@interface AWEUploadCoverHelper : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWEUploadCoverResourceModel resourceModel;
@property (nonatomic) BOOL ignoreNewVideoCoverEdit;
@property (nonatomic) BOOL isSingleImageAsImageAlbumPublish;
- (id)publishViewModel;
- (void)setResourceModel:;
- (id)resourceModel;
- (void)setPublishViewModel:;
- (id)initWithPublishModel:;
- (BOOL)isSingleImageAsImageAlbumPublish;
- (id)coverTextImagePathUrl;
- (BOOL)needUploadCoverImage;
- (void)consumeUploadCoverResult:;
- (void)prepareForUploadCover:fileURLs:;
- (void)setIsSingleImageAsImageAlbumPublish:;
- (void)setIgnoreNewVideoCoverEdit:;
- (BOOL)ignoreNewVideoCoverEdit;
- (id)videoCoverImagePathUrl;
- (id)paymentCoverImagePathUrl;
- (void)removeFileWithUrl:;
- (void).cxx_destruct;
@end
