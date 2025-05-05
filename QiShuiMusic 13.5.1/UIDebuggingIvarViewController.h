@interface UIDebuggingIvarViewController : UITableViewController
@property (nonatomic) NSObject inspectedObject;
- (id)init;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)tableView:titleForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
- (id)_ivarForIndexPath:;
- (Class)_classForTableSection:;
- (id)_classHierarchyForInspectedObject;
- (id)_ivarsForInspectedObjectInClass:;
- (void)setInspectedObject:;
- (id)inspectedObject;
@end
