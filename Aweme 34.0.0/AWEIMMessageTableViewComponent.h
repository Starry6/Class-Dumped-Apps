@interface AWEIMMessageTableViewComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessageListViewController listVC;
@property (nonatomic) AWEIMCombineMessageListViewController combineListVC;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)messageListViewController;
- (BOOL)isInvalidMessageCell:;
- (void)highLightMessageCells:;
- (id)listVC;
- (id)combineMessageListViewController;
- (void)showQuotedCombineShareMessageDetail:;
- (void)setListVC:;
- (void)highLightAirborneMessageCells:;
- (id)combineListVC;
- (void)setCombineListVC:;
- (id)tableView;
- (void).cxx_destruct;
- (id)componentManager;
+ (id)componentWithContext:;
@end
