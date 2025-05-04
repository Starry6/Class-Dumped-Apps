@interface AWEIMAwemeMediaDisplayImageViewModel : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL hasOriginImage;
@property (nonatomic) <AWEIMAwemeMediaImageDownloader> downloader;
@property (nonatomic) @? completion;
@property (nonatomic) AWEIMMessage message;
- (void)getImageWithMessage:completion:;
- (BOOL)enableImageMediumTest;
- (void)p_configImageContainMediumImage;
- (void)p_configImageUseOrigin;
- (void)setHasOriginImage:;
- (BOOL)enableImageLoadTempCache;
- (void)p_configDownloadingStateLocalImageWithCompletion:;
- (BOOL)hasOriginImage;
- (id)image;
- (id)message;
- (id)completion;
- (void)setImage:;
- (id)downloader;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setDownloader:;
@end
