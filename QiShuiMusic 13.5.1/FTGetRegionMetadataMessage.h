@interface FTGetRegionMetadataMessage : IDSBaseMessage
@property (nonatomic) NSString language;
@property (nonatomic) NSDictionary responseRegionInformation;
- (id)init;
- (void)setLanguage:;
- (id)language;
- (id)messageBody;
- (long long)responseCommand;
- (id)bagKey;
- (long long)command;
- (BOOL)wantsBinaryPush;
- (void).cxx_destruct;
- (BOOL)wantsCompressedBody;
- (void)handleResponseDictionary:;
- (id)copyWithZone:;
- (id)requiredKeys;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsBagKey;
- (id)responseRegionInformation;
- (void)setResponseRegionInformation:;
@end
