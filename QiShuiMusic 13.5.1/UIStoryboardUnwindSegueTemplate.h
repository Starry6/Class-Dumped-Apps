@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate
@property (nonatomic) NSString action;
- (id)action;
- (id)initWithCoder:;
- (void)setAction:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)newDefaultPerformHandlerForSegue:;
- (id)segueWithDestinationViewController:;
- (id)instantiateOrFindDestinationViewControllerWithSender:;
- (id)_perform:;
- (id)_performWithDestinationViewController:sender:;
- (id)_legacyUnwindExecutorForTarget:;
@end
