@interface GEORecentLocationHistory : PBCodable
@property (nonatomic) BOOL hasBaseLocation;
@property (nonatomic) GEOLatLngE7 baseLocation;
@property (nonatomic) BOOL hasBaseTimestamp;
@property (nonatomic) Q baseTimestamp;
@property (nonatomic) NSMutableArray relativeLocations;
@property (nonatomic) BOOL hasTimeResolution;
@property (nonatomic) I timeResolution;
@property (nonatomic) BOOL hasBaseDistanceToDestination;
@property (nonatomic) I baseDistanceToDestination;
@property (nonatomic) Q relativeDistanceToDestinationsCount;
@property (nonatomic) ^i relativeDistanceToDestinations;
@property (nonatomic) BOOL hasLatlngCount;
@property (nonatomic) I latlngCount;
@property (nonatomic) BOOL hasEncodedLats;
@property (nonatomic) NSData encodedLats;
@property (nonatomic) BOOL hasEncodedLngs;
@property (nonatomic) NSData encodedLngs;
@property (nonatomic) BOOL hasEncodedDistancesToDestination;
@property (nonatomic) NSData encodedDistancesToDestination;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)baseLocation;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasBaseLocation;
- (void)setBaseLocation:;
- (unsigned long long)baseTimestamp;
- (void)setBaseTimestamp:;
- (void)setHasBaseTimestamp:;
- (BOOL)hasBaseTimestamp;
- (id)relativeLocations;
- (void)setRelativeLocations:;
- (void)clearRelativeLocations;
- (void)addRelativeLocations:;
- (unsigned long long)relativeLocationsCount;
- (id)relativeLocationsAtIndex:;
- (unsigned int)timeResolution;
- (void)setTimeResolution:;
- (void)setHasTimeResolution:;
- (BOOL)hasTimeResolution;
- (unsigned int)baseDistanceToDestination;
- (void)setBaseDistanceToDestination:;
- (void)setHasBaseDistanceToDestination:;
- (BOOL)hasBaseDistanceToDestination;
- (unsigned long long)relativeDistanceToDestinationsCount;
- (id)relativeDistanceToDestinations;
- (void)clearRelativeDistanceToDestinations;
- (void)addRelativeDistanceToDestination:;
- (int)relativeDistanceToDestinationAtIndex:;
- (void)setRelativeDistanceToDestinations:count:;
- (unsigned int)latlngCount;
- (void)setLatlngCount:;
- (void)setHasLatlngCount:;
- (BOOL)hasLatlngCount;
- (BOOL)hasEncodedLats;
- (id)encodedLats;
- (void)setEncodedLats:;
- (BOOL)hasEncodedLngs;
- (id)encodedLngs;
- (void)setEncodedLngs:;
- (BOOL)hasEncodedDistancesToDestination;
- (id)encodedDistancesToDestination;
- (void)setEncodedDistancesToDestination:;
+ (BOOL)isValid:;
+ (Class)relativeLocationsType;
@end
