@interface SYNotesActivationRequest : NSObject
@property (nonatomic) NSMutableArray _imagesData;
@property (nonatomic) NSMutableArray _urls;
@property (nonatomic) NSMutableArray _imageFileURLs;
@property (nonatomic) BOOL shouldAutoInsertLinkToCurrentActivity;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSArray imagesData;
@property (nonatomic) NSArray imageFileURLs;
- (id)init;
- (id)urls;
- (void).cxx_destruct;
- (id)_urls;
- (void)addURL:;
- (void)addURLs:;
- (id)imagesData;
- (id)_imagesData;
- (void)setShouldAutoInsertLinkToCurrentActivity:;
- (void)addImageData:;
- (void)addImageFileURLs:;
- (void)set_urls:;
- (id)_imageFileURLs;
- (void)set_imageFileURLs:;
- (void)addImagesData:;
- (id)imageFileURLs;
- (void)addImageFileURL:;
- (BOOL)shouldAutoInsertLinkToCurrentActivity;
- (void)set_imagesData:;
@end
