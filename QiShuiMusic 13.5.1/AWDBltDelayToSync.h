@interface AWDBltDelayToSync : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDelayMs;
@property (nonatomic) I delayMs;
@property (nonatomic) BOOL hasInitial;
@property (nonatomic) BOOL initial;
- (BOOL)initial;
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
- (void)setInitial:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setDelayMs:;
- (void)setHasDelayMs:;
- (BOOL)hasDelayMs;
- (unsigned int)delayMs;
- (void)setHasInitial:;
- (BOOL)hasInitial;
@end
