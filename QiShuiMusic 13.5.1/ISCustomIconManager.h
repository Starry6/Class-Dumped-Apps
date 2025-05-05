@interface ISCustomIconManager : NSObject
- (id)_init;
- (id)overrideIconForURL:;
- (id)overrideResourceForBundleIdentifier:;
- (id)specialFolderTypeForURL:;
+ (id)sharedInstance;
@end
