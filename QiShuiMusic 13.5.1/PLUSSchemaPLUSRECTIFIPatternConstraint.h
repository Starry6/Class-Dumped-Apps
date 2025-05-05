@interface PLUSSchemaPLUSRECTIFIPatternConstraint : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger constraintType;
@property (nonatomic) BOOL hasConstraintType;
@property (nonatomic) float constraintValue;
@property (nonatomic) BOOL hasConstraintValue;
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
- (void)setConstraintType:;
- (BOOL)hasConstraintType;
- (void)setHasConstraintType:;
- (void)deleteConstraintType;
- (void)setConstraintValue:;
- (BOOL)hasConstraintValue;
- (void)setHasConstraintValue:;
- (void)deleteConstraintValue;
- (int)constraintType;
- (float)constraintValue;
@end
