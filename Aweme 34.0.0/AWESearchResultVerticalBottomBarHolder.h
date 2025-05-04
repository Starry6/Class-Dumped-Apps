@interface AWESearchResultVerticalBottomBarHolder : UIView
@property (nonatomic) AWESearchResultVerticalBaseViewController container;
@property (nonatomic) AWESearchCachalotVerticalBottomBarConfigModel configModel;
@property (nonatomic) <AWESearchResultVerticalContainerInsertCardProtocol> insertDelegate;
- (id)configModel;
- (void)setConfigModel:;
- (id)insertDelegate;
- (void)setInsertDelegate:;
- (id)getBottomBarView;
- (void)showCommentInputPanelWithLogExtra:;
- (void)dismissCommentInputPanel;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (void)updateWithModel:;
+ (id)createConcreteEntryView:container:;
@end
