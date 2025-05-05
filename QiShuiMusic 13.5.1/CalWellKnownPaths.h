@interface CalWellKnownPaths : NSObject
+ (id)realHomeDirectoryPath;
+ (void)resetPaths;
+ (BOOL)checkOrCreatePath:;
+ (id)calendarFileHandlerPath;
+ (id)eventsPendingChangesPath;
@end
