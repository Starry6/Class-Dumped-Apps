@interface AWEFindFriendsQRCodeSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEFindFriendsQRCodeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchQRCode;
- (id)getCacheImage;
- (id)getCacheURL;
- (void)requestQRCodeImage:;
- (void)replaceSelfModels;
- (void)requestQRCode;
- (void)updateCache:qrCodeURL:;
- (BOOL)enableUseCacheImage;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
