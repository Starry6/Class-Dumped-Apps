@interface IDSMPFullAccountIdentity : IDSMPIdentity
@property (nonatomic) NSData publicName;
- (id)dataRepresentationWithError:;
- (id)publicName;
- (id)publicAccountIdentityWithError:;
- (id)rolledAccountIdenityWithError:;
- (id)signData:withError:;
+ (id)identityWithData:error:;
+ (id)fullAccountIdentityWithError:;
@end
