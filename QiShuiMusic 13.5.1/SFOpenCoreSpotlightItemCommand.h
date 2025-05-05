@interface SFOpenCoreSpotlightItemCommand : SFCommand
@property (nonatomic) NSString coreSpotlightIdentifier;
@property (nonatomic) NSString applicationBundleIdentifier;
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)applicationBundleIdentifier;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void)setApplicationBundleIdentifier:;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (void)setActionIdentifier:;
- (void)setCoreSpotlightIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
