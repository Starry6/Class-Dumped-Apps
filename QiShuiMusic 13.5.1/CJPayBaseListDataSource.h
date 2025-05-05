@interface CJPayBaseListDataSource : NSObject
@property (nonatomic) NSMutableDictionary sectionsDataDic;
- (id)sectionsDataDic;
- (void)setSectionsDataDic:;
- (double)viewHeightAtIndexPath:;
- (id)viewModelAtIndexPath:;
- (id)viewModelsAtSection:;
- (double)tableView:heightForRowAtIndexPath:;
- (void).cxx_destruct;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
@end
