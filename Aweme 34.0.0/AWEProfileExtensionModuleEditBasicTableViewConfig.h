@interface AWEProfileExtensionModuleEditBasicTableViewConfig : NSObject
@property (nonatomic) BOOL shouldForbidManualSort;
- (id)toolBarView;
- (long long)numberOfSectionsInTableView:cardLists:;
- (long long)numberOfRowsInSection:cardLists:;
- (double)heightForRowAtIndexPath:cardLists:;
- (id)cellForRowAtIndexPath:cardLists:;
- (double)heightForFooterInSection:cardLists:;
- (id)viewForFooterInSection:cardLists:;
- (BOOL)canMoveRowAtIndexPath:cardLists:;
- (id)targetIndexPathForMoveFromRowAtIndexPath:toProposedIndexPath:cardLists:;
- (long long)editingStyleForRowAtIndexPath:cardLists:;
- (BOOL)canEditRowAtIndexPath:cardLists:;
- (BOOL)shouldForbidManualSort;
- (void)setShouldForbidManualSort:;
- (double)heightForHeaderInSection:;
- (id)viewForHeaderInSection:;
@end
