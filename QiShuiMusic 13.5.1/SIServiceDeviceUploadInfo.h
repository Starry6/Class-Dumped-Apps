@interface SIServiceDeviceUploadInfo : SISchemaInstrumentationMessage
@property (nonatomic) NSString ref_id;
@property (nonatomic) BOOL hasRef_id;
@property (nonatomic) Q ns_relative_to_boot;
@property (nonatomic) BOOL hasNs_relative_to_boot;
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
- (BOOL)hasRef_id;
- (void)deleteRef_id;
- (void)setNs_relative_to_boot:;
- (BOOL)hasNs_relative_to_boot;
- (void)setHasNs_relative_to_boot:;
- (void)deleteNs_relative_to_boot;
- (id)ref_id;
- (void)setRef_id:;
- (unsigned long long)ns_relative_to_boot;
- (void)setHasRef_id:;
@end
