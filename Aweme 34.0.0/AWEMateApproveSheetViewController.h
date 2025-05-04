@interface AWEMateApproveSheetViewController : AWERelationSheetViewController
@property (nonatomic) AWERelationSheetContext context;
- (void)p_close;
- (void)p_setupSections;
- (void)p_trackEditRemarkActionType:actionStatus:;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)p_finish;
@end
