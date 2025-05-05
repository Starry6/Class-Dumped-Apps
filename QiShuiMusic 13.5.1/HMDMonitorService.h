@interface HMDMonitorService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackService:metrics:dimension:extra:;
+ (void)trackService:metrics:dimension:extra:syncWrite:;
+ (Class)service;
@end
