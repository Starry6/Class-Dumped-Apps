@interface IMSharedMessageAppSummary : NSObject
+ (id)pluginPath;
+ (Class)dataSourceClass;
+ (void)setDataSourceClass:;
+ (void)_initBundleClassAtPath:;
+ (void)initializePlugin;
+ (id)previewSummary;
+ (id)previewSummaryWithPluginPayload:;
+ (id)linkMetadataForPluginPayload:;
@end
