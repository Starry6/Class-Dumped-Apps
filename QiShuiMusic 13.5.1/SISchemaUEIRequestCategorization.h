@interface SISchemaUEIRequestCategorization : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger requestType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) NSInteger requestStatus;
@property (nonatomic) BOOL hasRequestStatus;
@property (nonatomic) NSData jsonData;
- (int)requestType;
- (void)setRequestType:;
- (BOOL)hasRequestType;
- (void)setHasRequestType:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setRequestStatus:;
- (void)deleteRequestType;
- (BOOL)hasRequestStatus;
- (void)setHasRequestStatus:;
- (void)deleteRequestStatus;
- (int)requestStatus;
@end
