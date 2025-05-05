@interface FPTestingCreation : FPTestingOperation
@property (nonatomic) q snapshotVersion;
@property (nonatomic) Q targetSide;
@property (nonatomic) <NSFileProviderItem> sourceItem;
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
- (id)sourceItem;
- (id)asCreation;
- (unsigned long long)targetSide;
- (id)initWithOperationIdentifier:sourceItem:domainVersion:snapshotVersion:;
- (long long)snapshotVersion;
+ (BOOL)supportsSecureCoding;
@end
