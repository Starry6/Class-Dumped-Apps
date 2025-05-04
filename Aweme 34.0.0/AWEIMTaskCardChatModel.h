@interface AWEIMTaskCardChatModel : AWEIMChatModel
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) AWEIMTaskCardListCellItem taskCardItem;
@property (nonatomic) q originUnreadCount;
- (void)setTaskCardItem:;
- (void)__updateUnreadCount;
- (void)setOriginUnreadCount:;
- (id)taskCardItem;
- (long long)originUnreadCount;
- (id)init;
- (id)attributedText;
- (void)setAttributedText:;
- (void).cxx_destruct;
@end
