@interface HybridMonitor : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSMutableDictionary commonCategory;
@property (nonatomic) NSString monitorSessionUUID;
@property (nonatomic) NSMutableDictionary sessionEvent;
@property (nonatomic) HybridContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__notifyWithEventName:bizTag:commonParams:metric:category:extra:platform:aid:maySample:urlString:;
- (void)_saveLongEvents:field:;
- (void)addCommonCategory:;
- (void)attachKitView:;
- (void)collectBoolean:field:;
- (void)collectEventTime:;
- (void)collectEventTime:reportToMonitor:;
- (void)collectInt:field:;
- (void)collectLong:field:;
- (void)collectString:field:;
- (id)commonCategory;
- (id)eventDic;
- (id)getContainerTiming;
- (id)monitorSessionUUID;
- (void)reportError:withError:withContext:;
- (void)reportResourceStatus:resourceStatus:resourceType:resourceURL:resourceVersion:resourceChannel:resourceBundle:resourceProcessorType:extraInfo:extraMetrics:;
- (void)reportWithEventName:bid:commonParams:metric:category:extra:platform:aid:maySample:;
- (void)reportWithEventName:bid:containerView:commonParams:metric:category:extra:platform:aid:maySample:;
- (void)setCommonCategory:;
- (void)setMonitorSessionUUID:;
- (id)url;
- (id)init;
- (void)dealloc;
- (id)context;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)sessionEvent;
- (void)setSessionEvent:;
+ (void)addInterceptor:;
+ (id)interceptorList;
+ (id)simpleReportter;
+ (BOOL)__schemaQueryWithChannelStyle:;
+ (BOOL)__schemaQueryWithUrlStyle:;
+ (void)attachVirtualAid:toView:;
+ (id)callSelectorWith:obj:;
+ (id)monitorURLWithOriginURL:platform:;
+ (void)removeInterceptor:;
+ (id)resolveChannelStyleToMonitorStyle:;
+ (id)resolveURLStyleToMonitorStyle:;
+ (void)startMonitorHook;
@end
