@interface VKVisualSearchViewController : UIViewController
@property (nonatomic) VKCVisualSearchResult visualSearchResult;
@property (nonatomic) BOOL didShowResults;
@property (nonatomic) UIActivityIndicatorView loadingIndicator;
@property (nonatomic) <VKVisualSearchViewControllerDelegate> delegate;
@property (nonatomic) NSArray visualSearchResultItems;
- (id)initWithImage:;
- (void)setDelegate:;
- (void)setVisualSearchResult:;
- (id)visualSearchResult;
- (void)viewWillDisappear:;
- (void)viewWillLayoutSubviews;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)viewDidLoad;
- (id)loadingIndicator;
- (void)setLoadingIndicator:;
- (id)initWithVisualSearchResultItems:;
- (void)setVisualSearchResultItems:;
- (void)_showVisualSearchViewController;
- (void)presentSearchViewControllerForSections:;
- (id)_resultSectionsForRecognitionResult:;
- (id)_resultSectionsForRecognitionResultItems:;
- (id)visualSearchResultItems;
- (BOOL)didShowResults;
- (void)setDidShowResults:;
@end
