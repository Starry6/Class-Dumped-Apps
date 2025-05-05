@interface SBSUserNotificationImageAssetDefinition : SBSUserNotificationImageDefinition
@property (nonatomic) NSString imagePath;
@property (nonatomic) NSString catalogPath;
@property (nonatomic) NSString catalogImageKey;
- (id)imagePath;
- (id)_initWithDictionary:;
- (id)build;
- (void).cxx_destruct;
- (id)initWithImagePath:;
- (id)initWithImageCatalogPath:catalogImageKey:;
- (id)_initWithImagePath:imageCatalogPath:catalogImageKey:;
- (id)catalogPath;
- (id)catalogImageKey;
+ (id)_definitionType;
@end
