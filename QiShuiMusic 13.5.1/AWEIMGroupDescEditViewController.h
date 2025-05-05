@interface AWEIMGroupDescEditViewController : AWEIMGroupNoticeEditViewController
@property (nonatomic) NSString draft;
@property (nonatomic) BOOL trackClickPopup;
@property (nonatomic) <AWEIMGroupDescEditViewControllerDelegate> delegate;
- (BOOL)trackClickPopup;
- (id)pageContentText;
- (id)pagePlaceHolder;
- (BOOL)__contentHasChanged;
- (void)backButtonClicked;
- (BOOL)iesim_transition_shouldStartInteractiveTranstionToVC:;
- (id)initWithDraft:;
- (long long)maxContentLength;
- (id)pagePreTitle;
- (void)saveButtonClicked;
- (void)setTrackClickPopup:;
- (id)templateLabelText;
- (id)templateTitle;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)draft;
- (id)pageTitle;
- (void)setDraft:;
@end
