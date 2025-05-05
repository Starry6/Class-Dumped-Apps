@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity
@property (nonatomic) IDSMPPublicAccountIdentity publicAccountIdentity;
- (id)dataRepresentationWithError:;
- (BOOL)isParentOfCluster:;
- (id)publicAccountIdentity;
@end
