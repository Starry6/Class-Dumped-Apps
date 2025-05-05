@interface IDSMPPublicLegacyIdentity : IDSMPIdentity
@property (nonatomic) ^{_SecMPPublicIdentity=} publicIdentity;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)dataRepresentationWithError:;
- (id)initWithPublicIdentity:;
- (id)signAndProtectData:withSigner:error:;
- (id)publicIdentity;
+ (id)_createPublicIdentityFromData:error:;
+ (BOOL)supportsSecureCoding;
+ (id)identityWithData:error:;
@end
