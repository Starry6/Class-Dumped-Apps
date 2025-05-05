@interface UIPrintPagesPerSheetOption : UIPrintOption
@property (nonatomic) NSIndexPath selectedIndexPath;
@property (nonatomic) NSArray nUpNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summaryString;
- (void).cxx_destruct;
- (id)itemList;
- (id)selectedItem;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:;
- (long long)listItemSelected:;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updateFromPrintInfo;
- (id)itemNameDictForNumber:;
- (id)shortSummary;
- (id)nUpNames;
- (void)setNUpNames:;
@end
