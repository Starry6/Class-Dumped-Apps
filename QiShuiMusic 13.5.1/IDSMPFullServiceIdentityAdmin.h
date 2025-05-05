@interface IDSMPFullServiceIdentityAdmin : IDSMPIdentity
@property (nonatomic) q identityServiceType;
@property (nonatomic) NSString identityServiceTypeName;
- (id)dataRepresentationWithError:;
- (long long)identityServiceType;
- (id)identityServiceTypeName;
- (id)publicServiceIdentityAdminWithError:;
+ (id)fullServiceIdentityWithFullAccountIdentity:type:error:;
+ (id)identityWithData:accountIdentity:error:;
@end
