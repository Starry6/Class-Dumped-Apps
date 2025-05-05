@interface AMSFamilyAccountPair : NSObject
@property (nonatomic) Q downloaderAccountID;
@property (nonatomic) Q familyID;
@property (nonatomic) Q purchaserAccountID;
- (unsigned long long)familyID;
- (id)initWithDownloaderAccountID:purchaserAccountID:familyID:;
- (unsigned long long)downloaderAccountID;
- (unsigned long long)purchaserAccountID;
@end
