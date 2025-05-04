@interface AWETopicPublishViewBarController : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> context;
@property (nonatomic) AWESearchTopicPublishBottomView bottomView;
@property (nonatomic) AWESearchDecoratorInnerFlowTopicBottomViewPublishContext bottomBarSharedContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)cellWillDisplay:forRowAtIndexPath:tableView:;
- (void)onBindContext;
- (id)bottomBarSharedContext;
- (void)setBottomBarSharedContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)bottomView;
- (void)setBottomView:;
- (Class)contextClass;
- (id)bottomBarView;
@end
