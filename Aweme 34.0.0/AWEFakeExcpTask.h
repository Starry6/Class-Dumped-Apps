@interface AWEFakeExcpTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackFakeExceptionIfNeeded;
+ (void)trackFakeExceptionWithProbability:;
+ (void)execute;
@end
