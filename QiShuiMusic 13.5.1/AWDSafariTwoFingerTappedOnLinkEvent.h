@interface AWDSafariTwoFingerTappedOnLinkEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) NSInteger outcome;
- (void)writeTo:;
- (unsigned long long)hash;
- (int)outcome;
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
- (void)setOutcome:;
- (BOOL)hasOutcome;
- (void)setHasOutcome:;
- (id)outcomeAsString:;
- (int)StringAsOutcome:;
@end
