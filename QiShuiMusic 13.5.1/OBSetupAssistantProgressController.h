@interface OBSetupAssistantProgressController : OBWelcomeController
@property (nonatomic) UIProgressView progressBar;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) NSLayoutConstraint progressLabelTopAnchorConstraint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProgress:;
- (void)setTitle:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithTitle:detailText:icon:;
- (id)progressBar;
- (id)progressLabel;
- (void)setProgressBar:;
- (id)initWithTitle:detailText:symbolName:;
- (void)setProgressText:;
- (id)_progressFont;
- (double)_progressLabelTopAnchorConstraintConstantWithFont:;
- (void)setProgressLabel:;
- (id)progressLabelTopAnchorConstraint;
- (void)setProgressLabelTopAnchorConstraint:;
@end
