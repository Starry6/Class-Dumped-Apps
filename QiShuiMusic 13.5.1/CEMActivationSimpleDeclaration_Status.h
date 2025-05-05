@interface CEMActivationSimpleDeclaration_Status : CEMPayloadBase
@property (nonatomic) NSArray statusInstalledConfigurations;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusInstalledConfigurations;
- (void)setStatusInstalledConfigurations:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;
+ (id)buildWithInstalledConfigurations:;
@end
