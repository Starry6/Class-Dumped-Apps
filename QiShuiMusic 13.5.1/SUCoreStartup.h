@interface SUCoreStartup : NSObject
- (id)_initAtStartup:usingDomain:usingFilesystemDir:;
+ (id)initializeSharedStartup:usingDomain:usingFilesystemDir:;
@end
