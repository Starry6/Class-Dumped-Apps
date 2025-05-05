@interface SSVCloudServiceCapabilitiesRequest : SSRequest
@property (nonatomic) BOOL allowsPromptingForPrivacyAcknowledgement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (void)startWithResponseBlock:;
- (BOOL)allowsPromptingForPrivacyAcknowledgement;
- (void)setAllowsPromptingForPrivacyAcknowledgement:;
@end
