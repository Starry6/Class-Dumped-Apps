@interface MHSchemaMHCarplayLanguageMismatch : SISchemaInstrumentationMessage
@property (nonatomic) NSString carHeadUnitSelectedLocale;
@property (nonatomic) BOOL hasCarHeadUnitSelectedLocale;
@property (nonatomic) NSInteger carplayTriggerMode;
@property (nonatomic) BOOL hasCarplayTriggerMode;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasCarHeadUnitSelectedLocale;
- (void)deleteCarHeadUnitSelectedLocale;
- (void)setCarplayTriggerMode:;
- (BOOL)hasCarplayTriggerMode;
- (void)setHasCarplayTriggerMode:;
- (void)deleteCarplayTriggerMode;
- (id)carHeadUnitSelectedLocale;
- (void)setCarHeadUnitSelectedLocale:;
- (int)carplayTriggerMode;
- (void)setHasCarHeadUnitSelectedLocale:;
@end
