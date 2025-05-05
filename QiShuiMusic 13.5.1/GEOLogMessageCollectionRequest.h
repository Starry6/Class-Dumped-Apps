@interface GEOLogMessageCollectionRequest : PBRequest
@property (nonatomic) NSMutableArray logMessages;
- (void)readAll:;
- (void)setLogMessages:;
- (BOOL)hasGreenTeaWithValue:;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (Class)responseClass;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)logMessageAtIndex:;
- (id)logMessages;
- (unsigned long long)hash;
- (unsigned long long)logMessagesCount;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)addLogMessage:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)clearLogMessages;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
+ (Class)logMessageType;
@end
