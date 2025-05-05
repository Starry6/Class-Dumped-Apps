@interface LynxMonitorService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formatContextTagName:;
- (void)formatEventReporter:data:metrics:category:;
- (void)reportErrorGlobalContextTag:data:;
- (void)reportImageStatus:data:;
- (void)reportResourceStatus:data:extra:;
- (void)reportTrail;
- (void)reportTrailEvent:data:;
+ (void)reportResourceErrorStatus:data:;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
@end
