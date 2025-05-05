@interface SFOpenFileProviderItemCommand : SFCommand
@property (nonatomic) NSString coreSpotlightIdentifier;
@property (nonatomic) NSString fileProviderIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)fileProviderIdentifier;
- (void)setFileProviderIdentifier:;
- (void)setCoreSpotlightIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
