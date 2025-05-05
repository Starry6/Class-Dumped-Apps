@interface CEMSystemMigrationDeclaration_CustomBehaviorItemPathsItem : CEMPayloadBase
@property (nonatomic) NSString payloadSourcePath;
@property (nonatomic) NSNumber payloadSourcePathInUserHome;
@property (nonatomic) NSString payloadTargetPath;
@property (nonatomic) NSNumber payloadTargetPathInUserHome;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadSourcePath;
- (void)setPayloadSourcePath:;
- (id)payloadSourcePathInUserHome;
- (void)setPayloadSourcePathInUserHome:;
- (id)payloadTargetPath;
- (void)setPayloadTargetPath:;
- (id)payloadTargetPathInUserHome;
- (void)setPayloadTargetPathInUserHome:;
+ (id)allowedPayloadKeys;
+ (id)buildWithSourcePath:withSourcePathInUserHome:withTargetPath:withTargetPathInUserHome:;
+ (id)buildRequiredOnlyWithSourcePath:withSourcePathInUserHome:withTargetPath:withTargetPathInUserHome:;
@end
