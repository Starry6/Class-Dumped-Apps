@interface SISchemaActiveAudioDevice : SISchemaInstrumentationMessage
@property (nonatomic) NSString vendorIdentifier;
@property (nonatomic) BOOL hasVendorIdentifier;
@property (nonatomic) NSString productIdentifier;
@property (nonatomic) BOOL hasProductIdentifier;
@property (nonatomic) NSData jsonData;
- (id)productIdentifier;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setProductIdentifier:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)vendorIdentifier;
- (BOOL)readFrom:;
- (void)setVendorIdentifier:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasVendorIdentifier;
- (void)deleteVendorIdentifier;
- (BOOL)hasProductIdentifier;
- (void)deleteProductIdentifier;
- (void)setHasVendorIdentifier:;
- (void)setHasProductIdentifier:;
@end
