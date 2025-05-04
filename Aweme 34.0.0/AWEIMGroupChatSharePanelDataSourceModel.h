@interface AWEIMGroupChatSharePanelDataSourceModel : NSObject
@property (nonatomic) <AWEIMGroupChatSharePanelConfigItemCellDelegate> cellDelegate;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) <AWEIMSharePanelExtensionInterface> extension;
@property (nonatomic) UIViewController<AWEIMTranspondListViewControllerInterface> transpondViewController;
@property (nonatomic) UICollectionView configCollectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configCollectionView;
- (id)transpondViewController;
- (void)setTranspondViewController:;
- (void)setConfigCollectionView:;
- (void)setExtension:;
- (id)extension;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)cellDelegate;
- (void)setCellDelegate:;
@end
