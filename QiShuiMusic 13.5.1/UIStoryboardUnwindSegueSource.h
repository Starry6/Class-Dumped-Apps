@interface UIStoryboardUnwindSegueSource : NSObject
@property (nonatomic) UIViewController sourceViewController;
@property (nonatomic) : unwindAction;
@property (nonatomic) @ sender;
- (id)init;
- (id)sender;
- (id)sourceViewController;
- (void).cxx_destruct;
- (id)_initWithSourceViewController:action:sender:;
- (id)_childContainingUnwindSourceForViewController:;
- (id)_findDestination;
- (SEL)unwindAction;
@end
