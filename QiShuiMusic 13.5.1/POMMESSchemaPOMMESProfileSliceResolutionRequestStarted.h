@interface POMMESSchemaPOMMESProfileSliceResolutionRequestStarted : SISchemaInstrumentationMessage
@property (nonatomic) I sliceLabel;
@property (nonatomic) BOOL hasSliceLabel;
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
- (void)setSliceLabel:;
- (BOOL)hasSliceLabel;
- (void)setHasSliceLabel:;
- (void)deleteSliceLabel;
- (unsigned int)sliceLabel;
@end
