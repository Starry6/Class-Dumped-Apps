@interface AWDBltDelayReceiveLocal : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasUniqueid;
@property (nonatomic) NSString uniqueid;
@property (nonatomic) BOOL hasDelayMs;
@property (nonatomic) I delayMs;
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
- (BOOL)hasUniqueid;
- (void)setDelayMs:;
- (void)setHasDelayMs:;
- (BOOL)hasDelayMs;
- (id)uniqueid;
- (void)setUniqueid:;
- (unsigned int)delayMs;
@end
