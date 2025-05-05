@interface SBSUserNotificationImageDefinition : SBSUserNotificationAssetDefinition
+ (id)definitionWithImagePath:;
+ (id)definitionWithImageCatalogPath:catalogImageKey:;
+ (id)definitionWithSystemImageName:;
+ (id)definitionWithSystemImageName:tintColorDefinition:;
+ (id)definitionWithSystemImageName:tintColor:;
+ (id)definitionWithSystemImageName:tintColorName:;
@end
