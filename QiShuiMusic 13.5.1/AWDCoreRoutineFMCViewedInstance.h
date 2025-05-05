@interface AWDCoreRoutineFMCViewedInstance : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasParkingId;
@property (nonatomic) NSString parkingId;
@property (nonatomic) BOOL hasUiPlacement;
@property (nonatomic) NSInteger uiPlacement;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setUiPlacement:;
- (int)uiPlacement;
- (BOOL)hasParkingId;
- (void)setHasUiPlacement:;
- (BOOL)hasUiPlacement;
- (id)parkingId;
- (void)setParkingId:;
@end
