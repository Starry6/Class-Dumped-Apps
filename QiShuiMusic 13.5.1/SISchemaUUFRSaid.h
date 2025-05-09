@interface SISchemaUUFRSaid : SISchemaInstrumentationMessage
@property (nonatomic) NSString dialogIdentifier;
@property (nonatomic) BOOL hasDialogIdentifier;
@property (nonatomic) SISchemaSiriResponseContext siriResponseContext;
@property (nonatomic) BOOL hasSiriResponseContext;
@property (nonatomic) NSString aceViewID;
@property (nonatomic) BOOL hasAceViewID;
@property (nonatomic) NSString aceViewClass;
@property (nonatomic) BOOL hasAceViewClass;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setDialogIdentifier:;
- (id)dialogIdentifier;
- (BOOL)hasSiriResponseContext;
- (void)deleteSiriResponseContext;
- (id)siriResponseContext;
- (void)setSiriResponseContext:;
- (void)setHasSiriResponseContext:;
- (BOOL)hasDialogIdentifier;
- (void)deleteDialogIdentifier;
- (BOOL)hasAceViewID;
- (void)deleteAceViewID;
- (BOOL)hasAceViewClass;
- (void)deleteAceViewClass;
- (id)aceViewID;
- (void)setAceViewID:;
- (id)aceViewClass;
- (void)setAceViewClass:;
- (void)setHasDialogIdentifier:;
- (void)setHasAceViewID:;
- (void)setHasAceViewClass:;
@end
