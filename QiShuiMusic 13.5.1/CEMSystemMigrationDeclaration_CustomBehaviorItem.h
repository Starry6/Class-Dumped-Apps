@interface CEMSystemMigrationDeclaration_CustomBehaviorItem : CEMPayloadBase
@property (nonatomic) NSString payloadContext;
@property (nonatomic) NSArray payloadPaths;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadContext;
- (void)setPayloadContext:;
- (id)payloadPaths;
- (void)setPayloadPaths:;
+ (id)allowedPayloadKeys;
+ (id)buildWithContext:withPaths:;
+ (id)buildRequiredOnlyWithContext:withPaths:;
@end
