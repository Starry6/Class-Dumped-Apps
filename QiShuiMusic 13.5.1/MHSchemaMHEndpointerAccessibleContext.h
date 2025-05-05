@interface MHSchemaMHEndpointerAccessibleContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger accessibleEndpointerLevel;
@property (nonatomic) BOOL hasAccessibleEndpointerLevel;
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
- (void)setAccessibleEndpointerLevel:;
- (BOOL)hasAccessibleEndpointerLevel;
- (void)setHasAccessibleEndpointerLevel:;
- (void)deleteAccessibleEndpointerLevel;
- (int)accessibleEndpointerLevel;
@end
