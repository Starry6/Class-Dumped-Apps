@interface AWESearchTopicDiscussBottomBarHolder : AWESearchResultVerticalBottomBarHolder
@property (nonatomic) AWESearchCachalotVerticalBottomBarConfigModel model;
@property (nonatomic) AWESearchTopicDiscussShotCommentBottomBarView customedBottomBar;
@property (nonatomic) NSObject<AWESearchDecoratorDelegateProtocol> searchDecoratorDelegate;
- (id)customedBottomBar;
- (id)getBottomBarView;
- (void)setCustomedBottomBar:;
- (id)searchDecoratorDelegate;
- (void)setSearchDecoratorDelegate:;
- (void)handleCommentClick;
- (void)handleShootPublishClick;
- (id)findTopicDiscussSelectTabCardViewModel;
- (void)setModel:;
- (id)init;
- (void)dealloc;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
