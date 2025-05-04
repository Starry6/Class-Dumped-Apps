@interface AWEIMEmoticonRelyListPropertyCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView emoticonView;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) AWEIMEmoticonReplyListSectionModel model;
@property (nonatomic) AWEIMConversationContext conversationContext;
- (void)p_setupUI;
- (id)emoticonView;
- (void)setEmoticonView:;
- (void)renderWithModel:;
- (void)p_bindToVM;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)conversationContext;
- (void)setConversationContext:;
@end
