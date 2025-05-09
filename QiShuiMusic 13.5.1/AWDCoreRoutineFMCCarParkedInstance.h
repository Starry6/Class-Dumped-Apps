@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasParkingId;
@property (nonatomic) NSString parkingId;
@property (nonatomic) BOOL hasTriggerTypes;
@property (nonatomic) NSInteger triggerTypes;
@property (nonatomic) BOOL hasUserAssistanceRequired;
@property (nonatomic) BOOL userAssistanceRequired;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) NSInteger horizontalAccuracy;
@property (nonatomic) BOOL hasQualityIndicator;
@property (nonatomic) NSInteger qualityIndicator;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) NSInteger locationType;
- (int)locationType;
- (void)dealloc;
- (void)setHasHorizontalAccuracy:;
- (int)horizontalAccuracy;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (void)setHorizontalAccuracy:;
- (BOOL)hasTimestamp;
- (void)setHasLocationType:;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setLocationType:;
- (BOOL)hasHorizontalAccuracy;
- (BOOL)hasLocationType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)triggerTypes;
- (void)setTriggerTypes:;
- (void)setHasTriggerTypes:;
- (BOOL)hasTriggerTypes;
- (void)setUserAssistanceRequired:;
- (void)setQualityIndicator:;
- (BOOL)userAssistanceRequired;
- (int)qualityIndicator;
- (BOOL)hasParkingId;
- (id)parkingId;
- (void)setParkingId:;
- (void)setHasUserAssistanceRequired:;
- (BOOL)hasUserAssistanceRequired;
- (void)setHasQualityIndicator:;
- (BOOL)hasQualityIndicator;
@end
