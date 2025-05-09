@interface IESLiveInteractionChatGroupUserListController : UIViewController
@property (nonatomic) HTSLiveApi api;
@property (nonatomic) IESLiveInteractivePanelView containerView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtraParams:;
- (void)setEnterMethod:;
- (id)enterFrom;
- (id)enterMethod;
- (void)enterRoomWithID:;
- (id)extraParams;
- (void)renderItems:;
- (void)setEnterFrom:;
- (void)setGroupID:;
- (id)groupID;
- (id)containerView;
- (id)tableView:cellForRowAtIndexPath:;
- (id)items;
- (void)setContainerView:;
- (void)dismissWithCompletion:;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setItems:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)fetchData;
- (void)viewDidLoad;
- (id)api;
- (void)setApi:;
@end
