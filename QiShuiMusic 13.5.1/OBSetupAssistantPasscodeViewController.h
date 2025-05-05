@interface OBSetupAssistantPasscodeViewController : OBWelcomeController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAnimateEntireView;
- (void)animateDetailText:animationType:heightDifference:;
@end
