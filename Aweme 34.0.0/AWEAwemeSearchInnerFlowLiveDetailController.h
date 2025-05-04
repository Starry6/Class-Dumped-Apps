@interface AWEAwemeSearchInnerFlowLiveDetailController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEListDataController<AWESearchLiveStreamProtocol> dataController;
@property (nonatomic) NSDictionary logExtraDictForFirstItem;
@property (nonatomic) NSDictionary logExtraDictForNonFirstItem;
- (void)setDataController:;
- (void)configCell:atIndexPath:tableView:;
- (void)modifySearchIDInLogExtraForSearchInnerRerank:atIndexPath:;
- (id)logExtraDictForFirstItem;
- (void)setLogExtraDictForFirstItem:;
- (id)logExtraDictForNonFirstItem;
- (void)setLogExtraDictForNonFirstItem:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)dataController;
@end
