@interface BMPBMindfulnessSessionEvent : PBCodable
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) NSInteger sessionType;
@property (nonatomic) BOOL hasStateType;
@property (nonatomic) NSInteger stateType;
- (int)sessionType;
- (BOOL)hasSessionType;
- (void)setHasSessionType:;
- (int)StringAsStateType:;
- (void)writeTo:;
- (id)stateTypeAsString:;
- (unsigned long long)hash;
- (void)setStateType:;
- (int)StringAsSessionType:;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)stateType;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)sessionTypeAsString:;
- (BOOL)hasStateType;
- (void)setHasStateType:;
- (BOOL)isEqual:;
- (void)setSessionType:;
- (id)copyWithZone:;
@end
