@interface AWEMateApplySheetViewController : AWERelationSheetViewController
@property (nonatomic) AWERelationSheetContext context;
@property (nonatomic) AWERelationSheetApplyMessageSection applyMessageSection;
@property (nonatomic) AWERelationSheetRemarkSection remarkSection;
@property (nonatomic) BOOL viewHasAppeared;
- (void)p_setupSections;
- (void)setApplyMessageSection:;
- (id)applyMessageSection;
- (void)setRemarkSection:;
- (id)remarkSection;
- (void)p_send;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)context;
- (BOOL)viewHasAppeared;
- (void)setViewHasAppeared:;
@end
