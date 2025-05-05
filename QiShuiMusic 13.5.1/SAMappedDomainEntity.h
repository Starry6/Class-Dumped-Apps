@interface SAMappedDomainEntity : AceObject
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSData usoGraphPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (id)identifier;
- (id)encodedClassName;
- (void)setIdentifier:;
- (id)usoGraphPayload;
- (void)setUsoGraphPayload:;
@end
