@interface FLEXMutableListSection : FLEXCollectionContentSection
@property (nonatomic) @? configureCell;
@property (nonatomic) @? selectionHandler;
@property (nonatomic) NSArray list;
@property (nonatomic) NSArray filteredList;
@property (nonatomic) NSDictionary cellRegistrationMapping;
- (id)initWithList:configurationBlock:filterMatcher:;
- (id)list;
- (void)setList:;
- (id)filteredList;
- (void)mutate:;
- (void)setCustomTitle:;
- (BOOL)canSelectRow:;
- (id)viewControllerToPushForRow:;
- (id)didSelectRowAction:;
- (void)configureCell:forRow:;
- (id)reuseIdentifierForRow:;
- (void)setCellRegistrationMapping:;
- (id)cellRegistrationMapping;
- (id)selectionHandler;
- (void)setSelectionHandler:;
- (id)configureCell;
- (void).cxx_destruct;
+ (id)list:cellConfiguration:filterMatcher:;
@end
