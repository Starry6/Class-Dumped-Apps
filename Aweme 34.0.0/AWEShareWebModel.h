@interface AWEShareWebModel : NSObject
@property (nonatomic) NSDictionary poiGoodsPanelExtraData;
@property (nonatomic) NSDictionary poiGoodsPanelExtraData;
@property (nonatomic) Q contentType;
@property (nonatomic) UIImage shareImage;
@property (nonatomic) AWEShareWebMetadataModel metadata;
@property (nonatomic) BOOL showsIMForQRCode;
@property (nonatomic) BOOL shouldTrackH5Share;
@property (nonatomic) NSString activityName;
- (id)shareImage;
- (void)setShareImage:;
- (void)setShowsIMForQRCode:;
- (void)setShouldTrackH5Share:;
- (void)setPoiGoodsPanelExtraData:;
- (void)setPoiGoodsPanelExtraData:;
- (id)poiGoodsPanelExtraData;
- (id)poiGoodsPanelExtraData;
- (BOOL)showsIMForQRCode;
- (BOOL)shouldTrackH5Share;
- (void)setMetadata:;
- (id)initWithParams:;
- (id)metadata;
- (unsigned long long)contentType;
- (void)setContentType:;
- (void).cxx_destruct;
- (id)activityName;
- (void)setActivityName:;
@end
