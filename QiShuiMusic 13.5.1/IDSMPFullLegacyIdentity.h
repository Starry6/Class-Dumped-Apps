@interface IDSMPFullLegacyIdentity : IDSMPIdentity
@property (nonatomic) ^{_SecMPFullIdentity=} fullIdentity;
- (id)protectedHashOfMessageData:error:;
- (BOOL)purgeFromKeychain:;
- (id)initWithCoder:;
- (BOOL)didDataRepresentationFormatChangeFromDataRepresentation:error:;
- (void)encodeWithCoder:;
- (id)fullIdentity;
- (id)dataRepresentationWithError:;
- (id)publicIdentityWithError:;
- (id)verifyAndExposeData:withSigner:error:;
- (unsigned int)dataProtectionClassWithError:;
- (BOOL)updateIdentityToDataProtectionClass:error:;
- (id)initWithFullIdentity:;
+ (BOOL)supportsSecureCoding;
+ (id)_createFullIdentityWithDataProtectionClass:error:;
+ (id)_copyPublicIdentityFromFullIdentity:error:;
+ (id)identityWithData:error:;
+ (id)identityWithDataProtectionClass:error:;
+ (id)_createFullIdentityFromData:error:;
+ (id)_createFullIdentityWithError:;
+ (id)identityWithError:;
@end
