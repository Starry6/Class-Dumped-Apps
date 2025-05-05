@interface AKAuthorizationPaneContext : NSObject
@property (nonatomic) NSMutableArray internalMutableConstraints;
@property (nonatomic) AKAuthorizationPaneViewController paneViewController;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) NSMutableArray mutableConstraints;
- (id)stackView;
- (void).cxx_destruct;
- (id)mutableConstraints;
- (id)initWithPaneViewController:stackView:;
- (id)initWithPaneViewController:stackView:mutableConstraints:;
- (void)addSubPane:;
- (void)addEmptyViewWithSpacing:;
- (id)paneViewController;
- (id)internalMutableConstraints;
- (void)setInternalMutableConstraints:;
@end
