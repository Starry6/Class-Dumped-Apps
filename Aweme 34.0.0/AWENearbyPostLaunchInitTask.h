@interface AWENearbyPostLaunchInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackNearbInitTaskWithStartInitTimeStamp:duration:;
+ (void)execute;
@end
