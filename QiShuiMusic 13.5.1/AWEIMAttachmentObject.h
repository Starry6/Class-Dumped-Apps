@interface AWEIMAttachmentObject : NSObject
@property (nonatomic) NSInteger fileType;
@property (nonatomic) NSData attachment;
@property (nonatomic) NSString attachmentMD5;
@property (nonatomic) NSString locoalVideoGalleryPath;
@property (nonatomic) BOOL isVideoFromShareExtension;
@property (nonatomic) NSString attachmentAssetIdentifier;
@property (nonatomic) AVAsset attachmentAsset;
@property (nonatomic) NSData quickData;
- (id)attachmentAsset;
- (id)attachmentAssetIdentifier;
- (id)attachmentMD5;
- (BOOL)isVideoFromShareExtension;
- (id)locoalVideoGalleryPath;
- (id)quickData;
- (void)setAttachmentAsset:;
- (void)setAttachmentAssetIdentifier:;
- (void)setAttachmentMD5:;
- (void)setIsVideoFromShareExtension:;
- (void)setLocoalVideoGalleryPath:;
- (void)setQuickData:;
- (void)setFileType:;
- (int)fileType;
- (void).cxx_destruct;
- (id)attachment;
- (void)setAttachment:;
@end
