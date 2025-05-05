@interface AWEShareWebModel : NSObject
@property (nonatomic) Q contentType;
@property (nonatomic) UIImage shareImage;
@property (nonatomic) AWEShareWebMetadataModel metadata;
@property (nonatomic) BOOL showsIMForQRCode;
@property (nonatomic) BOOL shouldTrackH5Share;
@property (nonatomic) NSString activityName;
- (void)setShareImage:;
- (void)setShouldTrackH5Share:;
- (void)setShowsIMForQRCode:;
- (id)shareImage;
- (BOOL)shouldTrackH5Share;
- (BOOL)showsIMForQRCode;
- (void)setContentType:;
- (unsigned long long)contentType;
- (id)metadata;
- (id)initWithParams:;
- (void)setMetadata:;
- (void).cxx_destruct;
- (id)activityName;
- (void)setActivityName:;
@end
