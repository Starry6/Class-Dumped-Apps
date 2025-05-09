@interface FLOWSchemaFLOWKeyboardUsageMetadata : SISchemaInstrumentationMessage
@property (nonatomic) I numCharsAdded;
@property (nonatomic) BOOL hasNumCharsAdded;
@property (nonatomic) I numCharsDeleted;
@property (nonatomic) BOOL hasNumCharsDeleted;
@property (nonatomic) I levenshteinEditDistance;
@property (nonatomic) BOOL hasLevenshteinEditDistance;
@property (nonatomic) BOOL isEmojiUsed;
@property (nonatomic) BOOL hasIsEmojiUsed;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setNumCharsAdded:;
- (BOOL)hasNumCharsAdded;
- (void)setHasNumCharsAdded:;
- (void)deleteNumCharsAdded;
- (void)setNumCharsDeleted:;
- (BOOL)hasNumCharsDeleted;
- (void)setHasNumCharsDeleted:;
- (void)deleteNumCharsDeleted;
- (void)setLevenshteinEditDistance:;
- (BOOL)hasLevenshteinEditDistance;
- (void)setHasLevenshteinEditDistance:;
- (void)deleteLevenshteinEditDistance;
- (void)setIsEmojiUsed:;
- (BOOL)hasIsEmojiUsed;
- (void)setHasIsEmojiUsed:;
- (void)deleteIsEmojiUsed;
- (unsigned int)numCharsAdded;
- (unsigned int)numCharsDeleted;
- (unsigned int)levenshteinEditDistance;
- (BOOL)isEmojiUsed;
@end
