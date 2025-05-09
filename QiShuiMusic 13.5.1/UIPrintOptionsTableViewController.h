@interface UIPrintOptionsTableViewController : UITableViewController
@property (nonatomic) UIPrintPanelViewController printPanelViewController;
@property (nonatomic) UIPrintInfo printInfo;
@property (nonatomic) NSArray printOptionSections;
@property (nonatomic) UIPrintStandardOptionsSection standardOptionsSection;
@property (nonatomic) UIPrintMoreOptionsSection moreOptionsSection;
@property (nonatomic) UIPrintMediaQualitySection mediaQualitySection;
@property (nonatomic) UIPrintLayoutSection layoutSection;
@property (nonatomic) UIPrintScalingSection scalingSection;
@property (nonatomic) UIPrintFinishingOptionsSection finishingOptionsSection;
@property (nonatomic) UIPrintApplicationSection appSection;
@property (nonatomic) UIPrinterAttributesService printerAttributesService;
@property (nonatomic) NSString printerWarnings;
@property (nonatomic) UIPrinter currentPrinter;
@property (nonatomic) UIViewController<UIPrintAppExtensionProtocol> appPrintExtensionController;
@property (nonatomic) BOOL showingGatheringPrinterInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tableView:cellForRowAtIndexPath:;
- (id)layoutSection;
- (void)dismissKeyboard;
- (id)printInfo;
- (void)viewDidDisappear:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setPrintInfo:;
- (void).cxx_destruct;
- (id)printPanelViewController;
- (void)viewDidAppear:;
- (void)setLayoutSection:;
- (void)viewWillAppear:;
- (double)tableView:heightForHeaderInSection:;
- (void)setPrintPanelViewController:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)tableView:viewForFooterInSection:;
- (id)appSection;
- (void)setShowContactingPrinter:;
- (id)currentPrinter;
- (void)setCurrentPrinter:;
- (void)stopPrinterWarningPolling;
- (id)printOptionAtIndexPath:;
- (id)appPrintExtensionController;
- (void)setAppPrintExtensionController:;
- (BOOL)keyboardShowing;
- (void)startPrinterWarningPoll;
- (void)showGatheringPrinterInfo;
- (void)hideGatheringPrinterInfo;
- (id)initWithTableView:printInfo:printPanelViewController:;
- (BOOL)updatePrintSectionList;
- (BOOL)canDismissPrintOptions;
- (void)setShowingGatheringPrinterInfo:;
- (void)updateWarnings:forPrinter:;
- (BOOL)showingGatheringPrinterInfo;
- (id)printOptionSections;
- (void)setPrintOptionSections:;
- (id)standardOptionsSection;
- (void)setStandardOptionsSection:;
- (id)moreOptionsSection;
- (void)setMoreOptionsSection:;
- (id)mediaQualitySection;
- (void)setMediaQualitySection:;
- (id)scalingSection;
- (void)setScalingSection:;
- (id)finishingOptionsSection;
- (void)setFinishingOptionsSection:;
- (void)setAppSection:;
- (id)printerAttributesService;
- (void)setPrinterAttributesService:;
- (id)printerWarnings;
- (void)setPrinterWarnings:;
@end
