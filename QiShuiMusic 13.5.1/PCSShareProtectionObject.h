@interface PCSShareProtectionObject : NSObject
@property (nonatomic) ^{_OpaquePCSShareProtection={__CFRuntimeBase=QAQ}^{_PCSIdentitySetData}^{_PCSIdentitySetData}^{_PCSIdentitySetData}^{__CFDictionary}^{__CFArray}^{__CFDictionary}^{__CFData}^{__CFData}^{__CFData}^{_PCSKeyData}^{__CFData}^{_PCSKeyData}^{__CFDictionary}II{PCSAttributes=I^{PCSTypeValue}}^{_PCSPublicIdentityData}^{_PCSPublicIdentityData}^{_PCSPublicIdentityData}^{_PCSPublicIdentityData}^{_PCSIdentityData}^{_PCSIdentityData}Ii{?=BBBBBBB}I} shareProtection;
- (void)dealloc;
- (id)initWithShareProtectionRef:;
- (id)initWithSharingRequestData:identitySet:error:;
- (id)sharingRequestDataForIdentity:error:;
- (id)sharingRequestDataForIdentity:flags:error:;
- (id)sharingRequestDataForIdentity:owner:flags:error:;
- (id)exportAcceptedSharingRequestWithError:;
- (id)shareProtection;
@end
