@interface AWDCoreRoutinePersistenceMirroringAccountDevices : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) NSMutableArray profiles;
@property (nonatomic) BOOL hasTopDeviceClass;
@property (nonatomic) NSInteger topDeviceClass;
@property (nonatomic) BOOL hasTotalVisits;
@property (nonatomic) NSInteger totalVisits;
@property (nonatomic) BOOL hasTotalPlaces;
@property (nonatomic) NSInteger totalPlaces;
@property (nonatomic) BOOL hasTotalTransitions;
@property (nonatomic) NSInteger totalTransitions;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (id)profiles;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setProfiles:;
- (void)clearProfiles;
- (void)addProfiles:;
- (unsigned long long)profilesCount;
- (id)profilesAtIndex:;
- (void)setTopDeviceClass:;
- (void)setHasTopDeviceClass:;
- (BOOL)hasTopDeviceClass;
- (void)setTotalVisits:;
- (void)setHasTotalVisits:;
- (BOOL)hasTotalVisits;
- (void)setTotalPlaces:;
- (void)setHasTotalPlaces:;
- (BOOL)hasTotalPlaces;
- (void)setTotalTransitions:;
- (void)setHasTotalTransitions:;
- (BOOL)hasTotalTransitions;
- (int)topDeviceClass;
- (int)totalVisits;
- (int)totalPlaces;
- (int)totalTransitions;
+ (Class)profilesType;
@end
