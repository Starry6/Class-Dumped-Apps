@interface SFCredentialProviderExtensionState : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL supportsIncrementalUpdates;
@property (nonatomic) NSString localizedDisplayName;
@property (nonatomic) SFExternalCredentialIdentityStoreIdentifier credentialIdentityStoreIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)localizedDisplayName;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)isEnabled;
- (id)initWithEnabledState:supportsIncrementalUpdates:;
- (id)initWithEnabledState:supportsIncrementalUpdates:localizedDisplayName:credentialIdentityStoreIdentifier:;
- (BOOL)supportsIncrementalUpdates;
- (id)credentialIdentityStoreIdentifier;
+ (BOOL)supportsSecureCoding;
+ (id)credentialProviderExtensionWithDisabledState;
@end
