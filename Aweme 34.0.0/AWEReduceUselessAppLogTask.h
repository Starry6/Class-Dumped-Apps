@interface AWEReduceUselessAppLogTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)localAppLogListConfig;
+ (void)setUselessAppLogBlackList:;
+ (id)uselessAppLogBlackList;
+ (void)execute;
@end
