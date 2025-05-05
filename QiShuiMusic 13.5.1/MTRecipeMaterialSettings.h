@interface MTRecipeMaterialSettings : NSObject
@property (nonatomic) NSDictionary styles;
@property (nonatomic) <MTTinting><MTMaterialFiltering><MTUserInfoProviding> baseMaterialSettings;
@property (nonatomic) q materialSettingsVersion;
@property (nonatomic) NSString recipeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)styles;
- (id)recipeName;
- (id)_visualStyleSetDescription;
- (id)baseMaterialSettings;
- (long long)materialSettingsVersion;
- (id)_platformColorsStyleSetName;
- (id)_newVisualStyleSet;
- (id)initWithRecipeName:andDescription:descendantDescriptions:bundle:;
- (void).cxx_destruct;
- (id)description;
- (id)styleNameForCategory:;
- (void)setStyles:;
+ (id)styleSetNameForStyleSetFromRecipeWithName:;
@end
