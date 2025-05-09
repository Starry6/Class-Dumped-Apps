@interface SFPerformEntityQueryCommand : SFCommand
@property (nonatomic) NSString searchString;
@property (nonatomic) NSString tokenString;
@property (nonatomic) SFSymbolImage symbolImage;
@property (nonatomic) NSInteger entityType;
@property (nonatomic) NSString entityIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)_cpCommandType;
- (void)setEntityIdentifier:;
- (void)setSearchString:;
- (id)searchString;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (id)entityIdentifier;
- (void)encodeWithCoder:;
- (id)tokenString;
- (void).cxx_destruct;
- (int)entityType;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)symbolImage;
- (void)setEntityType:;
- (BOOL)hasEntityType;
- (void)setTokenString:;
- (void)setSymbolImage:;
+ (BOOL)supportsSecureCoding;
@end
