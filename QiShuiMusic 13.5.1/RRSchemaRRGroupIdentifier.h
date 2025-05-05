@interface RRSchemaRRGroupIdentifier : SISchemaInstrumentationMessage
@property (nonatomic) NSString groupId;
@property (nonatomic) BOOL hasGroupId;
@property (nonatomic) I seq;
@property (nonatomic) BOOL hasSeq;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)groupId;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (void)setGroupId:;
- (BOOL)isEqual:;
- (void)setHasGroupId:;
- (BOOL)hasGroupId;
- (void)deleteGroupId;
- (void)setSeq:;
- (BOOL)hasSeq;
- (void)setHasSeq:;
- (void)deleteSeq;
- (unsigned int)seq;
@end
