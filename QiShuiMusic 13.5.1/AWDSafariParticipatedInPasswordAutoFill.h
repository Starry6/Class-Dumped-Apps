@interface AWDSafariParticipatedInPasswordAutoFill : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasAutoFillInteractionType;
@property (nonatomic) NSInteger autoFillInteractionType;
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
- (int)autoFillInteractionType;
- (void)setAutoFillInteractionType:;
- (void)setHasAutoFillInteractionType:;
- (BOOL)hasAutoFillInteractionType;
- (id)autoFillInteractionTypeAsString:;
- (int)StringAsAutoFillInteractionType:;
@end
