@interface AWEShareQRCodeChannel : AWEShareBaseChannel
@property (nonatomic) BOOL usesTikCode;
@property (nonatomic) q shareCategory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shareWithCompletion:;
- (id)shareImage;
- (void)shareItem:willAppear:;
- (id)shareTitleFromSettings;
- (long long)shareCategory;
- (id)trackingLabel;
- (void)setShareCategory:;
- (void)p_trackLiveShare;
- (id)shareEnterFrom;
- (BOOL)usesTikCode;
- (void)setUsesTikCode:;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
