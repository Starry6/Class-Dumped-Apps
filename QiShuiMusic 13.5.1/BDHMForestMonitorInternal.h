@interface BDHMForestMonitorInternal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)customReport:url:bid:containerId:category:metrics:extra:sampleLevel:;
- (void)monitorEvent:data:extra:;
+ (id)shared;
@end
