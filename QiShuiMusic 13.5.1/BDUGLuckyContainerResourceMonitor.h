@interface BDUGLuckyContainerResourceMonitor : NSObject
@property (nonatomic) BOOL enableLastProxyTag;
@property (nonatomic) BOOL enableLastResourceTag;
@property (nonatomic) q maxLastResourceTag;
@property (nonatomic) NSMutableArray lastResources;
@property (nonatomic) q lastResourcesTagIndexOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interceptorName;
- (void)updateProxyTagsWithExtraParams:;
- (void)resetReportTags;
- (void)setLastResourcesTagIndexOffset:;
- (void)__onStartFetchWithURLString:;
- (void)__removeAllResourceTagsFromInjectedInfo:count:;
- (void)__removeAllTagsFromInjectedInfo:;
- (id)__reportKeyWithIndex:;
- (void)__setTagForInjectedInfo:value:key:;
- (BOOL)enableLastProxyTag;
- (BOOL)enableLastResourceTag;
- (id)lastResources;
- (long long)lastResourcesTagIndexOffset;
- (long long)maxLastResourceTag;
- (id)monitorInterceptorName;
- (void)setEnableLastProxyTag:;
- (void)setEnableLastResourceTag:;
- (void)setLastResources:;
- (void)setMaxLastResourceTag:;
- (void)startFetchWith:taskConfig:;
- (void)updateWithSettings:;
- (void)willFetchWithURL:parameters:;
- (id)init;
- (void).cxx_destruct;
+ (void)feedReady;
+ (void)preStartup;
+ (id)sharedInstance;
@end
