@interface AWEIMNormalImageMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel imageDownloadVM;
@property (nonatomic) NSString cachedImageAttachmentFileAbsolutePath;
@property (nonatomic) UIImage cachedImage;
@property (nonatomic) q vmState;
@property (nonatomic) double process;
@property (nonatomic) q fileSize;
- (void)setupWithMessage:;
- (long long)vmState;
- (void)setVmState:;
- (id)largeImageAttachmentMessageExtKey;
- (id)clipThumbnailImageAttachmentMessageExtKey;
- (id)imageAttachmentCacheKey;
- (id)clipThumbnailImageAttachmentCacheKey;
- (id)imageAttachmentMessageExtKey;
- (id)specializedMessage;
- (id)imageAttachmentFileAbsolutePath;
- (void)p_generateThumbnailImageWithOriginalImageLocalPath:;
- (id)p_createImageDownloadVMWithCurrentMessage;
- (id)imageDownloadVM;
- (void)setImageDownloadVM:;
- (void)setCachedImageAttachmentFileAbsolutePath:;
- (id)clipThumbnailImageAttachmentFileAbsolutePath;
- (BOOL)p_hasClipThumbnailLocalImage;
- (BOOL)p_hasLocalImageWithReduceResolutionValue:;
- (void)p_bindImageDownloadVM;
- (void)p_waitForMessageExtAndShowImage;
- (BOOL)p_getSameImageFromOtherMessage;
- (BOOL)p_hasLocalImageFromOtherMessage;
- (void)p_pushStateDownloadingImage;
- (id)p_createImageDownloadVM;
- (void)p_cleanUp;
- (void)p_pushStateNew;
- (id)p_attachmentFilePathWithKey:;
- (id)p_attachmentFileAbsolutePathWithKey:;
- (BOOL)p_hasLocalDiskCacheImageFromPath:;
- (id)cachedImageAttachmentFileAbsolutePath;
- (id)p_attachmentFileCacheAbsolutePathWithKey:;
- (id)imageAttachmentCacheKeyWithValue:;
- (id)imageAttachmentCacheFileAbsolutePath;
- (BOOL)forceReloadByICloud;
- (id)currentReduceResolutionImageWithValue:;
- (id)p_fetchClipThumbnailImage;
- (id)p_fetchLocalImageWithReduceResolutionValue:;
- (id)p_imageFromAbsolutePath:reduceResolutionValue:;
- (void)p_memoryCacheImage:withKey:;
- (id)p_reduceImageResolutionFromData:reduceResolutionValue:;
- (void)beginLoadProcess;
- (void)updateCachedImage:;
- (void)p_imageDownloadVMStateChanged:;
- (void)p_generateThumbnail;
- (id)init;
- (void)dealloc;
- (long long)fileSize;
- (void).cxx_destruct;
- (double)process;
- (id)currentImage;
- (void)setProcess:;
- (void)setCachedImage:;
- (id)cachedImage;
+ (BOOL)enableImageMessageThumbOptWithMessage:;
+ (BOOL)enableImageMessageLargeOptWithMessage:;
+ (BOOL)enableImageMessageLongOptWithMessage:;
+ (BOOL)enableImageMessageClipThumbnailOptWithMessage:;
@end
