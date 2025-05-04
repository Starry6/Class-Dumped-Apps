@interface AWEStudioPersistentLogBiz : NSObject
+ (void)insertSchemaLog:creationID:;
+ (void)insertTrackerLog:params:creationID:;
+ (void)insertPublishLog:level:creationID:;
+ (void)insertComposerLog:level:creationID:;
@end
