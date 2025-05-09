@interface UIPrintFeedFromOption : UIPrintOption
@property (nonatomic) NSIndexPath selectedIndexPath;
@property (nonatomic) NSMutableArray trayNames;
@property (nonatomic) NSArray trays;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summaryString;
- (id)summary;
- (void).cxx_destruct;
- (id)itemList;
- (id)selectedItem;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:;
- (BOOL)shouldShow;
- (long long)listItemSelected:;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updateFromPrintInfo;
- (void)currentPrinterChanged;
- (id)trayNames;
- (id)trays;
- (id)selectedTrayName;
- (void)setTrays:;
- (void)setTrayNames:;
@end
