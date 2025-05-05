@interface UIStoryboardSegueTemplate : NSObject
@property (nonatomic) BOOL performOnViewLoad;
@property (nonatomic) BOOL animates;
@property (nonatomic) NSString customPrepareForChildViewControllerSelectorName;
@property (nonatomic) : prepareForChildViewControllerSelector;
@property (nonatomic) NSString identifier;
@property (nonatomic) UIViewController viewController;
- (id)init;
- (void)setViewController:;
- (id)identifier;
- (id)initWithCoder:;
- (id)perform:;
- (void)encodeWithCoder:;
- (id)viewController;
- (void).cxx_destruct;
- (id)newDefaultPrepareHandlerForSegue:;
- (id)newDefaultPerformHandlerForSegue:;
- (id)segueWithDestinationViewController:;
- (id)customPrepareForChildViewControllerSelectorName;
- (void)setCustomPrepareForChildViewControllerSelectorName:;
- (SEL)prepareForChildViewControllerSelector;
- (id)instantiateOrFindDestinationViewControllerWithSender:;
- (id)_perform:;
- (id)_performWithDestinationViewController:sender:;
- (BOOL)performOnViewLoad;
- (void)setPerformOnViewLoad:;
- (BOOL)animates;
- (void)setAnimates:;
@end
