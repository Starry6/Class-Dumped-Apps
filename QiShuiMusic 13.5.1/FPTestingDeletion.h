@interface FPTestingDeletion : FPTestingOperation
@property (nonatomic) Q targetSide;
@property (nonatomic) NSString sourceItemIdentifier;
@property (nonatomic) NSString targetItemIdentifier;
@property (nonatomic) NSFileProviderItemVersion targetItemBaseVersion;
@property (nonatomic) NSFileProviderDomainVersion domainVersion;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)domainVersion;
- (id)asDeletion;
- (unsigned long long)targetSide;
- (id)targetItemIdentifier;
- (id)targetItemBaseVersion;
- (id)sourceItemIdentifier;
- (id)initWithOperationIdentifier:sourceItemIdentifier:targetItemIdentifier:targetItemBaseVersion:domainVersion:;
+ (BOOL)supportsSecureCoding;
@end
