@interface AAFamilyRequest : AARequest
@property (nonatomic) BOOL isUserInitiated;
- (BOOL)isUserInitiated;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAppleAccount:grandSlamAccount:accountStore:;
- (id)initWithGrandSlamAccount:accountStore:;
- (id)initWithGrandSlamSigner:;
- (id)_familyGrandSlamSigner;
@end
