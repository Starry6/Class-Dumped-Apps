@interface AWDIDSUniqueIncomingStreamIDs : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasIncomingCount;
@property (nonatomic) q incomingCount;
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
- (void)setIncomingCount:;
- (void)setHasIncomingCount:;
- (BOOL)hasIncomingCount;
- (long long)incomingCount;
@end
