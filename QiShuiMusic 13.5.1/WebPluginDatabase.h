@interface WebPluginDatabase : NSObject
- (void)refresh;
- (id)init;
- (void)dealloc;
- (void)close;
- (id)plugins;
- (id)pluginForMIMEType:;
- (id)pluginForExtension:;
- (void)setPlugInPaths:;
- (BOOL)isMIMETypeRegistered:;
- (void)addPluginInstanceView:;
- (void)removePluginInstanceView:;
- (void)removePluginInstanceViewsFor:;
- (void)destroyAllPluginInstanceViews;
- (id)_plugInPaths;
- (void)_addPlugin:;
- (void)_removePlugin:;
- (id)_scanForNewPlugins;
+ (id)sharedDatabase;
+ (id)sharedDatabaseIfExists;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:;
+ (id)_defaultPlugInPaths;
@end
