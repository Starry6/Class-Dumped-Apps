@interface INFERENCESchemaINFERENCESpeechAlternativeRanks : SISchemaInstrumentationMessage
@property (nonatomic) BOOL isError;
@property (nonatomic) BOOL hasIsError;
@property (nonatomic) I version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) I givenNameRank;
@property (nonatomic) BOOL hasGivenNameRank;
@property (nonatomic) I middleNameRank;
@property (nonatomic) BOOL hasMiddleNameRank;
@property (nonatomic) I familyNameRank;
@property (nonatomic) BOOL hasFamilyNameRank;
@property (nonatomic) I fullNameRank;
@property (nonatomic) BOOL hasFullNameRank;
@property (nonatomic) NSData jsonData;
- (void)setHasVersion:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setVersion:;
- (unsigned int)version;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)hasVersion;
- (void)deleteVersion;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setIsError:;
- (void)setHasIsError:;
- (BOOL)hasIsError;
- (BOOL)isError;
- (void)deleteIsError;
- (void)setGivenNameRank:;
- (BOOL)hasGivenNameRank;
- (void)setHasGivenNameRank:;
- (void)deleteGivenNameRank;
- (void)setMiddleNameRank:;
- (BOOL)hasMiddleNameRank;
- (void)setHasMiddleNameRank:;
- (void)deleteMiddleNameRank;
- (void)setFamilyNameRank:;
- (BOOL)hasFamilyNameRank;
- (void)setHasFamilyNameRank:;
- (void)deleteFamilyNameRank;
- (void)setFullNameRank:;
- (BOOL)hasFullNameRank;
- (void)setHasFullNameRank:;
- (void)deleteFullNameRank;
- (unsigned int)givenNameRank;
- (unsigned int)middleNameRank;
- (unsigned int)familyNameRank;
- (unsigned int)fullNameRank;
@end
