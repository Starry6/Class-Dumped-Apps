@interface UIPrintPanelViewController : UIViewController
@property (nonatomic) @? previewUpdateCompletionHandler;
@property (nonatomic) UIPrintPanelWindow printPanelWindow;
@property (nonatomic) UIPrintPanelNavigationController printPanelNavigationController;
@property (nonatomic) UIViewController parentController;
@property (nonatomic) UIView previewSeparatorView;
@property (nonatomic) UIPrintPreviewViewController previewViewController;
@property (nonatomic) UIView previewPanelView;
@property (nonatomic) _UIPrintMessageAndSpinnerView messageAndSpinner;
@property (nonatomic) NSLayoutConstraint previewHeightConstraint;
@property (nonatomic) UIPrintOptionsTableViewController printOptionsTableViewController;
@property (nonatomic) NSLayoutConstraint printOptionsWidthConstraint;
@property (nonatomic) q lastUsedPrinterIndex;
@property (nonatomic) NSArray lastUsedPrinterArray;
@property (nonatomic) NSArray vertScrollPrintPanelConstraints;
@property (nonatomic) NSArray horizScrollPrintPanelConstraints;
@property (nonatomic) UIPopoverController poverController;
@property (nonatomic) UIActivityViewController activityViewController;
@property (nonatomic) NSURL pdfURL;
@property (nonatomic) UIPrintPreviewInfo previewInfo;
@property (nonatomic) BOOL dismissed;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL showingPreview;
@property (nonatomic) UIPrintInfo printInfo;
@property (nonatomic) UIPrintPanelNavigationController printOptionsNavController;
@property (nonatomic) UITableView printOptionsTableView;
@property (nonatomic) UIViewController<UIPrintAppExtensionProtocol> appPrintExtensionController;
@property (nonatomic) UIPrintInteractionController printInteractionController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateLayout;
- (void)setDismissed:;
- (void)dismissAnimated:;
- (void)setAnimated:;
- (BOOL)animated;
- (void)dealloc;
- (void)setParentController:;
- (id)parentController;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)printInfo;
- (void)viewDidDisappear:;
- (id)printInteractionController;
- (id)keyCommands;
- (void)viewWillLayoutSubviews;
- (void)setPrintInfo:;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (BOOL)dismissed;
- (void)setPrinter:;
- (void)viewWillAppear:;
- (void)loadView;
- (void)setShowingPreview:;
- (void)_generatePDFForQuickLookCompletion:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)cancelButtonPressed:;
- (id)previewViewController;
- (void)setPreviewViewController:;
- (id)activityViewController;
- (void)setActivityViewController:;
- (void)setPrintInteractionController:;
- (void)backButtonPressed:;
- (id)messageAndSpinner;
- (void)setMessageAndSpinner:;
- (void)cancelPrinting;
- (void)printButtonPressed:;
- (id)printerDisplayName:;
- (id)previewInfo;
- (void)setPreviewInfo:;
- (id)pdfURL;
- (void)setPdfURL:;
- (id)appPrintExtensionController;
- (void)setAppPrintExtensionController:;
- (id)printOptionsTableViewController;
- (void)setPrintOptionsTableViewController:;
- (void)showPreviewGenerating;
- (void)shareButtonPress:;
- (void)printNavigationConrollerDidDismiss;
- (id)initWithPrintInterationController:inParentController:;
- (void)setShowPreviewGenerating:;
- (BOOL)showingVerticalPreview;
- (void)updatePreviewLayoutConstraints;
- (void)setPdfFileURL:shouldRenderOnChosenPaper:completed:pdfPassword:;
- (void)updatePrintPreviewInfo;
- (void)readPrintOptions;
- (BOOL)canShowAnnotations;
- (BOOL)showPageRange;
- (void)updatePageRange;
- (void)addPrintShareButtonsToNavItem:;
- (void)addCanelButtonToNavItem:;
- (void)startNewPreviewBlock:;
- (void)lookupLastUsedPrinter;
- (void)updatePreveiw;
- (void)printPanelDidDisappear;
- (BOOL)showingLayout;
- (BOOL)showingPreview;
- (id)previewVisibleRange;
- (void)startPrinting;
- (void)_presentInParentAnimated:;
- (void)presentPrintPanelAnimated:hostingScene:;
- (void)presentPrintPanelFromRect:inView:animated:;
- (void)presentPrintPanelFromBarButtonItem:animated:;
- (void)dismissPrintPanelWithAction:animated:;
- (id)printOptionsNavController;
- (void)setPrintOptionsNavController:;
- (id)printOptionsTableView;
- (void)setPrintOptionsTableView:;
- (id)previewUpdateCompletionHandler;
- (void)setPreviewUpdateCompletionHandler:;
- (id)printPanelWindow;
- (void)setPrintPanelWindow:;
- (id)printPanelNavigationController;
- (void)setPrintPanelNavigationController:;
- (id)previewSeparatorView;
- (void)setPreviewSeparatorView:;
- (id)previewPanelView;
- (void)setPreviewPanelView:;
- (id)previewHeightConstraint;
- (void)setPreviewHeightConstraint:;
- (id)printOptionsWidthConstraint;
- (void)setPrintOptionsWidthConstraint:;
- (long long)lastUsedPrinterIndex;
- (void)setLastUsedPrinterIndex:;
- (id)lastUsedPrinterArray;
- (void)setLastUsedPrinterArray:;
- (id)vertScrollPrintPanelConstraints;
- (void)setVertScrollPrintPanelConstraints:;
- (id)horizScrollPrintPanelConstraints;
- (void)setHorizScrollPrintPanelConstraints:;
- (id)poverController;
- (void)setPoverController:;
+ (BOOL)_preventsAppearanceProxyCustomization;
@end
