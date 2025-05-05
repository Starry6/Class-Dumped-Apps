@interface WebBasePluginPackage : NSObject
- (id)path;
- (BOOL)load;
- (id)bundleVersion;
- (id)bundleIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPath:;
- (unsigned int)versionNumber;
- (id).cxx_construct;
- (void)unload;
- (id)MIMETypeForExtension:;
- (BOOL)isQuickTimePlugIn;
- (void)createPropertyListFile;
- (id)pListForPath:createFile:;
- (id)_objectForInfoDictionaryKey:;
- (BOOL)getPluginInfoFromPLists;
- (id)pluginInfo;
- (BOOL)supportsExtension:;
- (BOOL)supportsMIMEType:;
- (BOOL)isJavaPlugIn;
- (BOOL)isNativeLibraryData:;
- (void)wasAddedToPluginDatabase:;
- (void)wasRemovedFromPluginDatabase:;
+ (id)pluginWithPath:;
@end
