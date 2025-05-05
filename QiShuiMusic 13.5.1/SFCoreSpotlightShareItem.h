@interface SFCoreSpotlightShareItem : SFShareItem
@property (nonatomic) NSString shareProviderTypeIdentifier;
@property (nonatomic) NSString applicationBundleIdentifier;
@property (nonatomic) NSString coreSpotlightIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)applicationBundleIdentifier;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void)setApplicationBundleIdentifier:;
- (void).cxx_destruct;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)shareProviderTypeIdentifier;
- (void)setShareProviderTypeIdentifier:;
- (void)setCoreSpotlightIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
