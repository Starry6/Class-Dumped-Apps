@interface SBSUserNotificationCAPackageDefinition : SBSUserNotificationAssetDefinition
@property (nonatomic) NSString caPackagePath;
- (id)_initWithDictionary:;
- (id)build;
- (void).cxx_destruct;
- (id)_initWithCAPackagePath:;
- (id)caPackagePath;
+ (id)_definitionType;
+ (id)definitionWithCAPackagePath:;
@end
