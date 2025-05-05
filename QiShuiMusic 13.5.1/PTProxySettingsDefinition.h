@interface PTProxySettingsDefinition : NSObject
@property (nonatomic) PTSettingsClassStructure structure;
@property (nonatomic) NSDictionary childDefinitions;
@property (nonatomic) NSDictionary defaultValueArchive;
@property (nonatomic) PTModule module;
- (id)module;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setModule:;
- (BOOL)isEqual:;
- (Class)settingsClass;
- (id)structure;
- (BOOL)allSettingsClassesExistAndHaveCorrectVersion;
- (void)setStructure:;
- (id)childDefinitions;
- (void)setChildDefinitions:;
- (id)defaultValueArchive;
- (void)setDefaultValueArchive:;
+ (BOOL)supportsSecureCoding;
+ (id)definitionForSettingsClass:;
@end
