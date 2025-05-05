@interface PKPaletteAttributeViewController : UIViewController
@property (nonatomic) BOOL didSendDismissStatistics;
@property (nonatomic) BOOL didExperienceUserInteraction;
@property (nonatomic) NSString toolIdentifier;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (id)toolIdentifier;
- (BOOL)didExperienceUserInteraction;
- (void)setDidExperienceUserInteraction:;
- (void)setToolIdentifier:;
- (BOOL)didSendDismissStatistics;
- (void)setDidSendDismissStatistics:;
@end
