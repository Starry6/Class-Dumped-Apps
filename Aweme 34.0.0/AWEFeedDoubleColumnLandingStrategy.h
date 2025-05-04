@interface AWEFeedDoubleColumnLandingStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldAvoidCondition;
- (id)initWithLandingContext:;
- (BOOL)shouldStrategyEffect;
- (void)executeLaunchLandingWithCompletionBlock:;
@end
