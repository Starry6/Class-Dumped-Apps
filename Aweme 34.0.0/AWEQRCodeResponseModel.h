@interface AWEQRCodeResponseModel : NSObject
@property (nonatomic) UIImage qrCodeImage;
@property (nonatomic) NSArray qrCodeUrlList;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSError qrCodeError;
@property (nonatomic) NSError avatarError;
@property (nonatomic) q expireTimeInSecond;
- (long long)expireTimeInSecond;
- (void)setExpireTimeInSecond:;
- (id)qrCodeUrlList;
- (void)setQrCodeUrlList:;
- (id)qrCodeImage;
- (void)setQrCodeImage:;
- (id)qrCodeError;
- (id)avatarError;
- (void)setQrCodeError:;
- (void)setAvatarError:;
- (void).cxx_destruct;
- (void)setAvatarImage:;
- (id)avatarImage;
@end
