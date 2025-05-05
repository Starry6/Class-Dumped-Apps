@interface SKTermsPageViewController : UIViewController
@property (nonatomic) <SKTermsPageViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (long long)positionForBar:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)edgesForExtendedLayout;
- (void)_dismissViewController;
- (void)_buttonAccept:;
- (void)_buttonDecline:;
- (id)initWithTerms:;
- (void)_dismissViewControllerAnimated:;
- (void)_dismissViewControllerAnimated:withAcceptance:;
- (void)_loadSubviews;
- (id)_markupTermsWithHTML:;
@end
