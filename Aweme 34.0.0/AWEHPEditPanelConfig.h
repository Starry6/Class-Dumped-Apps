@interface AWEHPEditPanelConfig : NSObject
@property (nonatomic) @? saveItemsBlock;
@property (nonatomic) @? canShowEditBlock;
@property (nonatomic) @? getItemsBlock;
@property (nonatomic) @? currentChannelID;
@property (nonatomic) @? editPanelShow;
- (void)setGetItemsBlock:;
- (void)setSaveItemsBlock:;
- (void)setCanShowEditBlock:;
- (void)setCurrentChannelID:;
- (void)setEditPanelShow:;
- (id)saveItemsBlock;
- (id)canShowEditBlock;
- (id)getItemsBlock;
- (id)editPanelShow;
- (void).cxx_destruct;
- (id)currentChannelID;
@end
