@interface SFOpenMediaCommand : SFCommand
@property (nonatomic) SFMediaMetadata mediaMetadata;
@property (nonatomic) NSString clientSelectedBundleIdentifier;
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
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)mediaMetadata;
- (void)setMediaMetadata:;
- (id)clientSelectedBundleIdentifier;
- (void)setClientSelectedBundleIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
