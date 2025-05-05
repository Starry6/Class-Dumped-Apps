@interface FigCaptureSessionParsedConfigurationRestrictions : NSObject
@property (nonatomic) BOOL allowAllConfigurations;
@property (nonatomic) NSArray allowedConnectionMediaTypes;
@property (nonatomic) NSArray allowedConnectionMetadataIdentifiers;
- (void)dealloc;
- (BOOL)allowAllConfigurations;
- (id)allowedConnectionMediaTypes;
- (id)initWithClientAuditToken:;
- (id)initWithAllowedAVMediaTypes:clientIsNonStandard:;
- (id)allowedConnectionMetadataIdentifiers;
@end
