@interface IGListBindingSectionController : IGListSectionController
@property (nonatomic) NSArray viewModels;
@property (nonatomic) @ object;
@property (nonatomic) q state;
@property (nonatomic) <IGListBindingSectionControllerDataSource> dataSource;
@property (nonatomic) <IGListBindingSectionControllerSelectionDelegate> selectionDelegate;
- (id)cellForItemAtIndex:;
- (id)debugDescriptionLines;
- (void)didDeselectItemAtIndex:;
- (void)didHighlightItemAtIndex:;
- (void)didUnhighlightItemAtIndex:;
- (void)didUpdateToObject:;
- (void)updateAnimated:completion:;
- (void)setObject:;
- (void)setDataSource:;
- (long long)numberOfItems;
- (void)setState:;
- (id)debugDescription;
- (id)dataSource;
- (long long)state;
- (void).cxx_destruct;
- (id)object;
- (void)didSelectItemAtIndex:;
- (id)selectionDelegate;
- (void)setSelectionDelegate:;
- (id)viewModels;
- (void)setViewModels:;
- (id)sizeForItemAtIndex:;
@end
