@interface UITableViewDataSource : NSObject
@property (nonatomic) NSArray sections;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sections;
- (id)tableView:cellForRowAtIndexPath:;
- (id)initWithCoder:;
- (double)tableView:heightForRowAtIndexPath:;
- (void)encodeWithCoder:;
- (id)tableView:viewForHeaderInSection:;
- (void).cxx_destruct;
- (void)setSections:;
- (double)tableView:heightForHeaderInSection:;
- (id)tableView:titleForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)tableView:titleForFooterInSection:;
- (BOOL)tableView:canEditRowAtIndexPath:;
- (BOOL)tableView:canMoveRowAtIndexPath:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (long long)tableView:editingStyleForRowAtIndexPath:;
- (long long)tableView:indentationLevelForRowAtIndexPath:;
+ (id)staticDataSourceWithSections:;
@end
