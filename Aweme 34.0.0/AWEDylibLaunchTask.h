@interface AWEDylibLaunchTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isLaunchStage;
+ (void)markLaunchFinish;
+ (void)execute;
@end
