@interface INFERENCESchemaINFERENCEContactQueryMetadata : SISchemaInstrumentationMessage
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasHasName;
@property (nonatomic) BOOL hasRelationship;
@property (nonatomic) BOOL hasHasRelationship;
@property (nonatomic) BOOL hasHandleLabel;
@property (nonatomic) BOOL hasHasHandleLabel;
@property (nonatomic) BOOL hasHandleValue;
@property (nonatomic) BOOL hasHasHandleValue;
@property (nonatomic) BOOL hasMeReference;
@property (nonatomic) BOOL hasHasMeReference;
@property (nonatomic) BOOL hasContactId;
@property (nonatomic) BOOL hasHasContactId;
@property (nonatomic) BOOL isEmergencyQuery;
@property (nonatomic) BOOL hasIsEmergencyQuery;
@property (nonatomic) NSData jsonData;
- (BOOL)hasRelationship;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (BOOL)hasName;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasName:;
- (BOOL)hasContactId;
- (BOOL)hasHasName;
- (void)setHasHasName:;
- (void)deleteHasName;
- (void)setHasRelationship:;
- (BOOL)hasHasRelationship;
- (void)setHasHasRelationship:;
- (void)deleteHasRelationship;
- (void)setHasHandleLabel:;
- (BOOL)hasHasHandleLabel;
- (void)setHasHasHandleLabel:;
- (void)deleteHasHandleLabel;
- (void)setHasHandleValue:;
- (BOOL)hasHasHandleValue;
- (void)setHasHasHandleValue:;
- (void)deleteHasHandleValue;
- (void)setHasMeReference:;
- (BOOL)hasHasMeReference;
- (void)setHasHasMeReference:;
- (void)deleteHasMeReference;
- (void)setHasContactId:;
- (BOOL)hasHasContactId;
- (void)setHasHasContactId:;
- (void)deleteHasContactId;
- (void)setIsEmergencyQuery:;
- (BOOL)hasIsEmergencyQuery;
- (void)setHasIsEmergencyQuery:;
- (void)deleteIsEmergencyQuery;
- (BOOL)hasHandleLabel;
- (BOOL)hasHandleValue;
- (BOOL)hasMeReference;
- (BOOL)isEmergencyQuery;
@end
