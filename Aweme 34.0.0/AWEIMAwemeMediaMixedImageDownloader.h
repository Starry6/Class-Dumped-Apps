@interface AWEIMAwemeMediaMixedImageDownloader : NSObject
@property (nonatomic) AWEIMMixImageMessage message;
@property (nonatomic) AWEIMAwemeMediaDownloaderContext context;
@property (nonatomic) UIImage currentImage;
@property (nonatomic) BOOL hasOriginImage;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithMessage:context:;
- (void)downloadAndSaveToAlbum;
- (void)setHasOriginImage:;
- (BOOL)hasOriginImage;
- (void)p_saveCurrentImage;
- (void)p_image:didFinishSavingWithError:contextInfo:;
- (void)p_showAlbumPrivacyAlert;
- (id)message;
- (void)setLoadingView:;
- (id)loadingView;
- (void)setContext:;
- (void).cxx_destruct;
- (id)currentImage;
- (void)setMessage:;
- (id)context;
- (void)setCurrentImage:;
@end
