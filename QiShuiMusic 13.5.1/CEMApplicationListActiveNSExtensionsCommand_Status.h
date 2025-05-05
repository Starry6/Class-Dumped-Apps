@interface CEMApplicationListActiveNSExtensionsCommand_Status : CEMPayloadBase
@property (nonatomic) NSArray statusExtensions;
- (void).cxx_destruct;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusExtensions;
- (void)setStatusExtensions:;
+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithExtensions:;
+ (id)buildRequiredOnlyWithExtensions:;
@end
