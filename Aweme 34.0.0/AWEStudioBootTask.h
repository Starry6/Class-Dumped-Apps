@interface AWEStudioBootTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)bizDowngradeStudioBootTask;
+ (void)execute;
+ (id)cacheQueue;
@end
