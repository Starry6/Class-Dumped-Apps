@interface GRRSchemaGRRSystemErrorOccurred : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
@property (nonatomic) NSData jsonData;
- (BOOL)hasErrorCode;
- (int)errorCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)errorMessage;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setErrorMessage:;
- (void)deleteErrorCode;
- (BOOL)hasErrorMessage;
- (void)deleteErrorMessage;
- (void)setHasErrorMessage:;
@end
