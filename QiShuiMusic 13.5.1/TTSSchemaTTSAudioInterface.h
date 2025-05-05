@interface TTSSchemaTTSAudioInterface : SISchemaInstrumentationMessage
@property (nonatomic) NSString vendorId;
@property (nonatomic) BOOL hasVendorId;
@property (nonatomic) NSString productId;
@property (nonatomic) BOOL hasProductId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)productId;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)vendorId;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasVendorId;
- (void)setVendorId:;
- (void)setProductId:;
- (void)deleteVendorId;
- (BOOL)hasProductId;
- (void)deleteProductId;
- (void)setHasVendorId:;
- (void)setHasProductId:;
@end
