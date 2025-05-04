@interface AWEPlayInteractionPublishWorkElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEButton publishWorkButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (id)activateInfoWithData:;
- (void)dynamicWidthRemakeLayout;
- (BOOL)shouldActivateButtonWithData:;
- (id)publishWorkButton;
- (void)didTapPublishWork:;
- (BOOL)shouldShowPublishWorkElement;
- (void)showPublishWorkButtonIfNeeded;
- (void)setPublishWorkButton:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
