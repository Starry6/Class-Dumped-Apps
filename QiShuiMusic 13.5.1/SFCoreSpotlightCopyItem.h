@interface SFCoreSpotlightCopyItem : SFCopyItem
@property (nonatomic) NSArray dataProviderTypeIdentifiers;
@property (nonatomic) NSArray fileProviderTypeIdentifiers;
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
- (void)setCoreSpotlightIdentifier:;
- (id)dataProviderTypeIdentifiers;
- (void)setDataProviderTypeIdentifiers:;
- (id)fileProviderTypeIdentifiers;
- (void)setFileProviderTypeIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
