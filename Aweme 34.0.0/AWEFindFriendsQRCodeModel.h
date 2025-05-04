@interface AWEFindFriendsQRCodeModel : NSObject
@property (nonatomic) UIImage qrCodeImage;
@property (nonatomic) q qrCodeStatus;
@property (nonatomic) NSString nameText;
@property (nonatomic) NSString idLabelText;
@property (nonatomic) @? copyIDBlock;
@property (nonatomic) @? retryFetchBlock;
- (void)setRetryFetchBlock:;
- (id)retryFetchBlock;
- (id)qrCodeImage;
- (void)setQrCodeImage:;
- (long long)qrCodeStatus;
- (void)setQrCodeStatus:;
- (id)idLabelText;
- (void)setIdLabelText:;
- (id)copyIDBlock;
- (void)setCopyIDBlock:;
- (void).cxx_destruct;
- (id)nameText;
- (void)setNameText:;
@end
