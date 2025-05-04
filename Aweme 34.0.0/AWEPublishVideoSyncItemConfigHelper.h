@interface AWEPublishVideoSyncItemConfigHelper : NSObject
- (id)aAWEStudioGlobalConfig;
- (BOOL)isJX;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)enableVideoSync;
+ (Class)aAWEStudioGlobalConfigClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;
@end
