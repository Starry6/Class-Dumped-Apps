@interface STMediaStatusDomainCameraDescriptor : NSObject
@property (nonatomic) NSString cameraIdentifier;
@property (nonatomic) BOOL eligibleForPrivacyIndicator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)initWithCameraIdentifier:;
- (id)initWithCameraIdentifier:eligibleForPrivacyIndicator:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (BOOL)isEligibleForPrivacyIndicator;
- (id)descriptionWithMultilinePrefix:;
- (id)cameraIdentifier;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
