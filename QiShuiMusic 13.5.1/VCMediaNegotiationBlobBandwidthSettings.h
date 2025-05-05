@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable
@property (nonatomic) NSInteger configuration;
@property (nonatomic) I maxBandwidth;
@property (nonatomic) BOOL hasConfigurationExtension;
@property (nonatomic) NSInteger configurationExtension;
- (void)writeTo:;
- (void)setConfiguration:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)configuration;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)maxBandwidth;
- (void)setMaxBandwidth:;
- (id)configurationAsString:;
- (int)StringAsConfiguration:;
- (int)configurationExtension;
- (void)setConfigurationExtension:;
- (void)setHasConfigurationExtension:;
- (BOOL)hasConfigurationExtension;
- (id)configurationExtensionAsString:;
- (int)StringAsConfigurationExtension:;
- (id)newBandwidthConfigurations;
+ (int)bandwidthConfigurationWithOperatingMode:connectionType:;
@end
