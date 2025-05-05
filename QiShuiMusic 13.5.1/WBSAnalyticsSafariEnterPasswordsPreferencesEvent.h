@interface WBSAnalyticsSafariEnterPasswordsPreferencesEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasPercentageOfDuplicatedPasswords;
@property (nonatomic) Q percentageOfDuplicatedPasswords;
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
- (void)setPercentageOfDuplicatedPasswords:;
- (void)setHasPercentageOfDuplicatedPasswords:;
- (BOOL)hasPercentageOfDuplicatedPasswords;
- (unsigned long long)percentageOfDuplicatedPasswords;
@end
