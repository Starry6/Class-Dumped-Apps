@interface AWEImageDynamicStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cpuLevelDidUpdate:newLevel:;
- (void)CPUDidFallback;
- (id)init;
+ (id)shared;
@end
