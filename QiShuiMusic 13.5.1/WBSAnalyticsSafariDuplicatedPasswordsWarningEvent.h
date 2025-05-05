@interface WBSAnalyticsSafariDuplicatedPasswordsWarningEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasDuplicatedPasswordsWarningInteractionType;
@property (nonatomic) NSInteger duplicatedPasswordsWarningInteractionType;
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
- (int)duplicatedPasswordsWarningInteractionType;
- (void)setDuplicatedPasswordsWarningInteractionType:;
- (void)setHasDuplicatedPasswordsWarningInteractionType:;
- (BOOL)hasDuplicatedPasswordsWarningInteractionType;
- (id)duplicatedPasswordsWarningInteractionTypeAsString:;
- (int)StringAsDuplicatedPasswordsWarningInteractionType:;
@end
