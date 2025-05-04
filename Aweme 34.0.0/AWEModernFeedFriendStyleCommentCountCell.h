@interface AWEModernFeedFriendStyleCommentCountCell : AWEFriendStyleBaseCell
@property (nonatomic) UILabel label;
@property (nonatomic) AWEFriendStyleCommentCountCellFrame commentCountCellFrame;
- (id)initWithStyle:reuseIdentifier:isInsStyle:;
- (id)commentCountCellFrame;
- (void)setCommentCountCellFrame:;
- (void)setLabel:;
- (void)setHighlighted:animated:;
- (id)label;
- (void).cxx_destruct;
@end
