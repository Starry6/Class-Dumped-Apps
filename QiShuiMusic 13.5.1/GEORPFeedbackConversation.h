@interface GEORPFeedbackConversation : PBCodable
@property (nonatomic) NSMutableArray messages;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)messages;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)addMessage:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMessages:;
- (void)clearMessages;
- (unsigned long long)messagesCount;
- (id)messageAtIndex:;
+ (BOOL)isValid:;
+ (Class)messageType;
@end
