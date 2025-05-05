@interface FLEXSystemLogViewController : FLEXFilteringTableViewController
@property (nonatomic) FLEXMutableListSection logMessages;
@property (nonatomic) <FLEXLogController> logController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (id)makeSections;
- (id)nonemptySections;
- (void)handleUpdateWithNewMessages:;
- (void)scrollToLastRow;
- (void)showLogSettings;
- (double)tableView:heightForRowAtIndexPath:;
- (BOOL)tableView:shouldShowMenuForRowAtIndexPath:;
- (BOOL)tableView:canPerformAction:forRowAtIndexPath:withSender:;
- (void)tableView:performAction:forRowAtIndexPath:withSender:;
- (id)tableView:contextMenuConfigurationForRowAtIndexPath:point:;
- (id)logMessages;
- (id)logController;
- (void).cxx_destruct;
+ (id)globalsEntryTitle:;
+ (id)globalsEntryViewController:;
@end
