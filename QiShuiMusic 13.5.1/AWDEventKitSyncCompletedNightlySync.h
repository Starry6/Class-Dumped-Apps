@interface AWDEventKitSyncCompletedNightlySync : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasEventsSynced;
@property (nonatomic) I eventsSynced;
- (void)writeTo:;
- (void)setHasSuccess:;
- (unsigned long long)hash;
- (BOOL)success;
- (void)setSuccess:;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (BOOL)hasSuccess;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setEventsSynced:;
- (void)setHasEventsSynced:;
- (BOOL)hasEventsSynced;
- (unsigned int)eventsSynced;
@end
