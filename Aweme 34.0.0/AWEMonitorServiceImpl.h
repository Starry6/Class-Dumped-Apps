@interface AWEMonitorServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackData:logTypeStr:;
- (void)trackService:status:extra:;
- (double)timeIntervalForKey:;
- (void)cancelTimingForKey:;
- (void)trackService:value:extra:;
- (BOOL)endTimingForKey:service:label:;
- (BOOL)endTimingForKey:service:label:duration:;
- (void)startTimingForKey:;
+ (id)sharedInstance;
@end
