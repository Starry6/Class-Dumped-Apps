@interface IDSMPPublicAccountIdentity : IDSMPIdentity
@property (nonatomic) NSData publicName;
- (id)dataRepresentationWithError:;
- (id)publicName;
- (BOOL)verifySignature:ofData:error:;
+ (id)publicAccountIdentitywithDataRepresentation:error:;
@end
