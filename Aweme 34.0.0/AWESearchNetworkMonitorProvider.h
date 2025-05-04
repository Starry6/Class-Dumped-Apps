@interface AWESearchNetworkMonitorProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)handleEventDidEnd:;
- (BOOL)shouldUseHMDTTMonitor;
- (BOOL)shouldUseNetworkMonitorOnSlardar;
- (BOOL)shouldUseNetworkMonitorOnTea;
- (id)eventName;
@end
