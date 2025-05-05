@interface UIPrintAccountInfoOption : UIPrintOption
@property (nonatomic) UITextField jobAccountIDTextField;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)summary;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (BOOL)canDismiss;
- (id)initWithPrintInfo:printPanelViewController:;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;
- (void)changeJobAccountID:;
- (BOOL)isJobAccountIDRequired;
- (void)promptForJobAccountID;
- (void)selectJobAccountID;
- (id)jobAccountIDTextField;
- (void)setJobAccountIDTextField:;
@end
