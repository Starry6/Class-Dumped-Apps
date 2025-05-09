@interface AWEShareModel : AWEBaseApiModel
@property (nonatomic) NSString shareUrl;
@property (nonatomic) BOOL isPersist;
@property (nonatomic) AWEURLModel shareQRCodeURL;
@property (nonatomic) AWEURLModel shareImageURL;
@property (nonatomic) NSString shareWeiboDesc;
@property (nonatomic) NSString shareLinkDesc;
@property (nonatomic) NSString shareTitle;
@property (nonatomic) NSString shareDesc;
@property (nonatomic) NSDictionary shareBusinessExt;
@property (nonatomic) NSString manageGoodsURL;
@property (nonatomic) NSString manageFXGURL;
@property (nonatomic) NSString shareSignatureDesc;
@property (nonatomic) NSString shareSignatureUrl;
@property (nonatomic) NSString shareChannelConfig;
@property (nonatomic) NSString shareShortenBelong;
- (id)shareImageURL;
- (void)setShareWeiboDesc:;
- (void)setShareDesc:;
- (void)setShareTitle:;
- (void)setShareQRCodeURL:;
- (void)setManageGoodsURL:;
- (void)setShareImageURL:;
- (void)setIsPersist:;
- (void)setManageFXGURL:;
- (void)setShareLinkDesc:;
- (void)setShareSignatureUrl:;
- (void)setShareSignatureDesc:;
- (void)setShareShortenBelong:;
- (void)setShareChannelConfig:;
- (void)setShareUrl:;
- (id)shareDesc;
- (id)shareWeiboDesc;
- (id)shareLinkDesc;
- (id)shareUrl;
- (BOOL)isPersist;
- (id)shareQRCodeURL;
- (id)shareBusinessExt;
- (void)setShareBusinessExt:;
- (id)manageGoodsURL;
- (id)manageFXGURL;
- (id)shareSignatureDesc;
- (id)shareSignatureUrl;
- (id)shareChannelConfig;
- (id)shareShortenBelong;
- (void).cxx_destruct;
- (id)shareTitle;
+ (id)shareQRCodeURLJSONTransformer;
+ (id)shareImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
