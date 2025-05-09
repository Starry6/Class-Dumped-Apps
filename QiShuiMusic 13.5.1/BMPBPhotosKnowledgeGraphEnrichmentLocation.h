@interface BMPBPhotosKnowledgeGraphEnrichmentLocation : PBCodable
@property (nonatomic) BOOL hasStreet;
@property (nonatomic) NSString street;
@property (nonatomic) BOOL hasCity;
@property (nonatomic) NSString city;
@property (nonatomic) BOOL hasState;
@property (nonatomic) NSString state;
@property (nonatomic) BOOL hasCountry;
@property (nonatomic) NSString country;
@property (nonatomic) BOOL hasEncodedLocation;
@property (nonatomic) NSData encodedLocation;
- (id)city;
- (id)country;
- (void)setState:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setCountry:;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)state;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setCity:;
- (id)copyWithZone:;
- (BOOL)hasState;
- (BOOL)hasStreet;
- (id)street;
- (void)setStreet:;
- (BOOL)hasCountry;
- (id)encodedLocation;
- (BOOL)hasCity;
- (BOOL)hasEncodedLocation;
- (void)setEncodedLocation:;
@end
