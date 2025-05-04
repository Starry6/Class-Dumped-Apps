@interface AWECreativeToolsEditDynamicTemplate : NSObject
@property (nonatomic) NSArray componentClasses;
@property (nonatomic) NSArray componentPluginClasses;
@property (nonatomic) AWEStudioComposerEditPageConfig pageConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentClasses;
- (id)componentPluginClasses;
- (id)componentConfigMap;
- (void)setComponentClasses:;
- (id)initWithComponentClasses:componentPlugins:pageConfig:;
- (void)setComponentPluginClasses:;
- (void).cxx_destruct;
- (id)pageConfig;
- (void)setPageConfig:;
+ (id)editorTemplateWithFeaturesConfigs:customizedComponents:customizedComponentPlugins:shouldUseImageAlbumEditor:mediaType:pageConfig:;
@end
