@interface ORCHSchemaORCHMultiUserScore : SISchemaInstrumentationMessage
@property (nonatomic) NSString loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (nonatomic) I score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (unsigned int)score;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setScore:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (id)loggableSharedUserId;
- (void)setLoggableSharedUserId:;
- (BOOL)hasLoggableSharedUserId;
- (void)deleteLoggableSharedUserId;
- (void)setHasLoggableSharedUserId:;
- (void)deleteScore;
@end
