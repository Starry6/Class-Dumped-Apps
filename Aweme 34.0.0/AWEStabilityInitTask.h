@interface AWEStabilityInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)listenSync;
+ (void)attachBuildInfo;
+ (void)execute;
@end
