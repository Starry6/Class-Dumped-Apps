@interface AAInheritanceContactController : NSObject
@property (nonatomic) NSString claimTokenString;
@property (nonatomic) NSString accessKeyString;
- (void).cxx_destruct;
- (id)claimTokenString;
- (id)accessKeyString;
- (id)initWithContactInfo:contactType:;
- (id)accessKeyQRCodeImageDataWithSize:;
- (id)_accessKeyQRCodeImage;
- (void)removeContactAsBeneficiaryWithCompletion:;
- (void)removeContactAsBenefactorWithCompletion:;
- (void)sendInvitationWithCompletion:;
@end
