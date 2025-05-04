@interface AWEIMLaunchLandingStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLandingContext:;
- (BOOL)shouldStrategyEffect;
- (void)executeLaunchLandingWithCompletionBlock:;
@end
