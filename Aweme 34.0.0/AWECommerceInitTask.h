@interface AWECommerceInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldDelay;
+ (void)tabBarControllerViewDidAppear;
+ (void)setupCommerceWithOptimize:;
+ (void)commerceNonUItask;
+ (void)execute;
@end
