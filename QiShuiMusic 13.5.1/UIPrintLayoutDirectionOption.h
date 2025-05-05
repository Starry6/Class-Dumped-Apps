@interface UIPrintLayoutDirectionOption : UIPrintOption
@property (nonatomic) NSIndexPath selectedIndexPath;
@property (nonatomic) NSArray layoutDirectionOptions;
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
- (id)shortSummary;
- (id)layoutDirectionOptions;
- (void)setLayoutDirectionOptions:;
@end
