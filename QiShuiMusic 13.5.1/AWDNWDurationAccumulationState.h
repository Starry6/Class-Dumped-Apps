@interface AWDNWDurationAccumulationState : PBCodable
@property (nonatomic) BOOL hasState;
@property (nonatomic) NSString state;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) Q duration;
- (void)dealloc;
- (BOOL)hasDuration;
- (void)setHasDuration:;
- (void)setState:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDuration:;
- (void)mergeFrom:;
- (id)state;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasState;
@end
