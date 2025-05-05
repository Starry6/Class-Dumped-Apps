@interface SACFTriggerMorphunAssetsManagement : SABaseClientBoundCommand
@property (nonatomic) NSString language;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)triggerMorphunAssetsManagement;
+ (id)triggerMorphunAssetsManagementWithDictionary:context:;
@end
