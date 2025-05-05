@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity
@property (nonatomic) ENGroupID groupID;
@property (nonatomic) IDSMPFullAccountIdentity fullAccountIdentity;
@property (nonatomic) NSArray fullServiceIdentitiesAdmin;
@property (nonatomic) NSArray fullServiceIdentitiesSigning;
@property (nonatomic) ^{__SecKey=} publicKey;
@property (nonatomic) NSData forwardingTicket;
- (id)groupID;
- (id)publicKey;
- (id)dataRepresentationWithError:;
- (id)signData:withError:;
- (id)forwardingTicket;
- (id)publicAccountClusterWithError:;
- (id)fullAccountIdentity;
- (id)clusterByUpdatingGroupID:error:;
- (id)rolledClusterWithFullAccountIdentity:fullAdminServiceIdentities:fullSigningServiceIdentities:error:;
- (id)fullServiceIdentitiesAdmin;
- (id)fullServiceIdentitiesSigning;
- (BOOL)isParentOfCluster:;
- (id)adminServiceIdentityWithType:;
- (id)signingServiceIdentityWithType:;
+ (id)clusterWithFullAccountIdentity:fullAdminServiceIdentities:fullSigningServiceIdentities:error:;
+ (id)clusterWithDataRepresentation:error:;
@end
