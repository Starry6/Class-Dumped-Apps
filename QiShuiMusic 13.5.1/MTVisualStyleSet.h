@interface MTVisualStyleSet : NSObject
@property (nonatomic) q visualStyleSetVersion;
@property (nonatomic) NSString visualStyleSetName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)visualStyleSetVersion;
- (id)initWithName:visualStyleSetDescription:andDescendantDescriptions:;
- (id)visualStylingForStyle:;
- (id)_materialDescriptionForStyle:withProvidedStyles:;
- (void).cxx_destruct;
- (id)_newMaterialSettingsForStyle:withProvidedStyles:;
- (id)description;
- (id)visualStyleSetName;
+ (id)recipeNameForRecipeFromStyle:fromStyleSetWithName:;
@end
