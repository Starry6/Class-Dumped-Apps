@interface CNSharingProfileOnboardingFlowResult : NSObject
@property (nonatomic) NSString givenName;
@property (nonatomic) NSString familyName;
@property (nonatomic) NSData imageData;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) NSString type;
@property (nonatomic) Q sharingAudience;
@property (nonatomic) BOOL didPersistImageToContact;
- (id)givenName;
- (void)setImageData:;
- (void)setFamilyName:;
- (id)imageData;
- (id)familyName;
- (id)cropRect;
- (void)setType:;
- (void)setGivenName:;
- (void)setCropRect:;
- (id)type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)sharingAudience;
- (void)setSharingAudience:;
- (BOOL)didPersistImageToContact;
- (void)setDidPersistImageToContact:;
@end
