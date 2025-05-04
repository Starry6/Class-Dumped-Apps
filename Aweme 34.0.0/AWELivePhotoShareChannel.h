@interface AWELivePhotoShareChannel : AWEShareBaseChannel
@property (nonatomic) AWEMediaDownloadOptions downloadOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareWithCompletion:;
- (id)shareImage;
- (void)shareItem:willAppear:;
- (id)prepareDownloadOptions;
- (BOOL)isShareItemEnabled;
- (id)downloadOptions;
- (void).cxx_destruct;
- (void)setDownloadOptions:;
- (id)shareType;
- (id)shareTitle;
@end
