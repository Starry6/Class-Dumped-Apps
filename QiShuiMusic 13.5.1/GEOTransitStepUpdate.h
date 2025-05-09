@interface GEOTransitStepUpdate : PBCodable
@property (nonatomic) BOOL hasUpdateIdentifier;
@property (nonatomic) NSData updateIdentifier;
@property (nonatomic) BOOL hasInstructions;
@property (nonatomic) GEOInstructionSet instructions;
@property (nonatomic) BOOL hasVehiclePositionInfo;
@property (nonatomic) GEOTransitVehiclePositionInfo vehiclePositionInfo;
@property (nonatomic) BOOL hasScheduleInfo;
@property (nonatomic) GEOTransitScheduleInfo scheduleInfo;
@property (nonatomic) BOOL hasBoardingInfo;
@property (nonatomic) GEOTransitBoardingInfo boardingInfo;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasUpdateIdentifier;
- (id)updateIdentifier;
- (void)setUpdateIdentifier:;
- (BOOL)hasInstructions;
- (id)instructions;
- (void)setInstructions:;
- (BOOL)hasVehiclePositionInfo;
- (id)vehiclePositionInfo;
- (void)setVehiclePositionInfo:;
- (BOOL)hasScheduleInfo;
- (id)scheduleInfo;
- (void)setScheduleInfo:;
- (BOOL)hasBoardingInfo;
- (id)boardingInfo;
- (void)setBoardingInfo:;
+ (BOOL)isValid:;
@end
