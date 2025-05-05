@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage
@property (nonatomic) NSString interfaceVendorID;
@property (nonatomic) BOOL hasInterfaceVendorID;
@property (nonatomic) NSString interfaceProductID;
@property (nonatomic) BOOL hasInterfaceProductID;
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
- (BOOL)hasInterfaceVendorID;
- (void)deleteInterfaceVendorID;
- (BOOL)hasInterfaceProductID;
- (void)deleteInterfaceProductID;
- (id)interfaceVendorID;
- (void)setInterfaceVendorID:;
- (id)interfaceProductID;
- (void)setInterfaceProductID:;
- (void)setHasInterfaceVendorID:;
- (void)setHasInterfaceProductID:;
@end
