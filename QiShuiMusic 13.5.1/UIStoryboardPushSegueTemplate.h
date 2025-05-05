@interface UIStoryboardPushSegueTemplate : UIStoryboardSegueTemplate
@property (nonatomic) q destinationContainmentContext;
@property (nonatomic) q splitViewControllerIndex;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)newDefaultPerformHandlerForSegue:;
- (long long)destinationContainmentContext;
- (void)setDestinationContainmentContext:;
- (long long)splitViewControllerIndex;
- (void)setSplitViewControllerIndex:;
@end
