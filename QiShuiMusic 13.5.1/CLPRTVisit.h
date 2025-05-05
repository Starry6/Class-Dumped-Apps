@interface CLPRTVisit : PBCodable
@property (nonatomic) BOOL hasEntryTime;
@property (nonatomic) double entryTime;
@property (nonatomic) BOOL hasExitTime;
@property (nonatomic) double exitTime;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (double)entryTime;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)exitTime;
- (void)setEntryTime:;
- (void)setHasEntryTime:;
- (BOOL)hasEntryTime;
- (void)setExitTime:;
- (void)setHasExitTime:;
- (BOOL)hasExitTime;
@end
