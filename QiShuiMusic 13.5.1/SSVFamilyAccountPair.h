@interface SSVFamilyAccountPair : NSObject
@property (nonatomic) Q downloaderAccountIdentifier;
@property (nonatomic) Q familyIdentifier;
@property (nonatomic) Q purchaserAccountIdentifier;
- (id)initWithDownloaderAccountIdentifier:purchaserAccountIdentifier:familyIdentifier:;
- (unsigned long long)downloaderAccountIdentifier;
- (unsigned long long)familyIdentifier;
- (unsigned long long)purchaserAccountIdentifier;
@end
