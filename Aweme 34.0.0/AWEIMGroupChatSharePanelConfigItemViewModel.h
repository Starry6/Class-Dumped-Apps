@interface AWEIMGroupChatSharePanelConfigItemViewModel : NSObject
@property (nonatomic) <AWEIMGroupChatSharePanelConfigItemCellDelegate> cellDelegate;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q itemType;
@property (nonatomic) BOOL switchOn;
@property (nonatomic) Q rectCorner;
@property (nonatomic) BOOL hideLineView;
- (void)setRectCorner:;
- (unsigned long long)rectCorner;
- (BOOL)hideLineView;
- (void)setHideLineView:;
- (void)configWithCell:;
- (unsigned long long)itemType;
- (void)setItemType:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)conversation;
- (void)setConversation:;
- (id)cellDelegate;
- (void)setCellDelegate:;
- (void)setSwitchOn:;
- (BOOL)switchOn;
@end
