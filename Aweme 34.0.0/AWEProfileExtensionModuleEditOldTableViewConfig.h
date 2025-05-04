@interface AWEProfileExtensionModuleEditOldTableViewConfig : AWEProfileExtensionModuleEditBasicTableViewConfig
@property (nonatomic) AWEProfileServiceComponentToolBarView toolBarView;
- (id)toolBarView;
- (void)setToolBarView:;
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
- (void).cxx_destruct;
- (double)heightForHeaderInSection:;
- (id)viewForHeaderInSection:;
@end
