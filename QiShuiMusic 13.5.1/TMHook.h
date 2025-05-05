@interface TMHook : NSObject
- (BOOL)deferPreload;
+ (BOOL)canReportRequestPermission;
+ (BOOL)entryEnable;
+ (BOOL)isEntryDefaultEnable;
+ (void)reportRequestPermission:state:uuid:;
+ (id)stubbedAPIs;
+ (id)stubbedCAPIs;
+ (id)stubbedClass;
+ (id)stubbedClassAPIs;
+ (id)stubbedInstanceAPIs;
+ (unsigned long long)storeType;
+ (void)preload;
+ (id)entryType;
+ (id)dataType;
+ (id)pipelineType;
@end
