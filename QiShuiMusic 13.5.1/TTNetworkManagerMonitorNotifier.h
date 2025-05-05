@interface TTNetworkManagerMonitorNotifier : NSObject
@property (nonatomic) BOOL enable;
- (void)notifyCdnCacheVerifyResponse:forRequest:errorState:;
- (void)notifyForMonitorFinishResponse:forRequest:error:response:;
- (void)notifyForMonitorSampleRequest:;
- (void)notifyForMonitorStartRequest:hasTriedTimes:;
- (BOOL)enable;
- (void)setEnable:;
+ (id)defaultNotifier;
@end
