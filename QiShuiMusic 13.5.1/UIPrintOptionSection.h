@interface UIPrintOptionSection : NSObject
@property (nonatomic) UIPrintPanelViewController printPanelViewController;
@property (nonatomic) UIPrintInfo printInfo;
@property (nonatomic) NSString title;
@property (nonatomic) UITableViewCell tableViewCell;
@property (nonatomic) NSMutableArray printOptions;
@property (nonatomic) BOOL shouldShow;
- (void)dismissKeyboard;
- (void)setTitle:;
- (id)printInfo;
- (id)summaryString;
- (id)title;
- (void)setPrintInfo:;
- (void).cxx_destruct;
- (id)printPanelViewController;
- (void)setPrintPanelViewController:;
- (id)tableViewCell;
- (void)setTableViewCell:;
- (BOOL)shouldShow;
- (BOOL)canDismiss;
- (id)initWithPrintInfo:printPanelViewController:;
- (BOOL)updatePrintOptionsList;
- (void)didSelectPrintOptionSection;
- (BOOL)keyboardShowing;
- (void)updateSectionSummary;
- (id)printOptions;
- (void)setPrintOptions:;
- (void)setShouldShow:;
@end
