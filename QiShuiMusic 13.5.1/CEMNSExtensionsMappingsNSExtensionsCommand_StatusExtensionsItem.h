@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase
@property (nonatomic) NSString statusIdentifier;
@property (nonatomic) NSString statusExtensionPoint;
@property (nonatomic) NSString statusDisplayName;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusIdentifier;
- (void)setStatusIdentifier:;
- (id)statusExtensionPoint;
- (void)setStatusExtensionPoint:;
- (id)statusDisplayName;
- (void)setStatusDisplayName:;
+ (id)allowedStatusKeys;
+ (id)buildWithIdentifier:withExtensionPoint:withDisplayName:;
+ (id)buildRequiredOnlyWithIdentifier:withExtensionPoint:withDisplayName:;
@end
