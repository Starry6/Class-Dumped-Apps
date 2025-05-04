@interface AWEModernFeedFriendStyleCommentCell : AWEFriendStyleBaseCell
@property (nonatomic) YYLabel authorLabel;
@property (nonatomic) YYLabel moreLabel;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) AWEFriendStyleCommentCellFrame commentCellFrame;
@property (nonatomic) @? highlightTapAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHighlightTapAction:;
- (void)setAuthorLabel:;
- (id)authorLabel;
- (id)highlightTapAction;
- (void)didTapContainerView:;
- (id)initWithStyle:reuseIdentifier:isInsStyle:;
- (void)setCommentCellFrame:;
- (id)commentCellFrame;
- (void)setHighlighted:animated:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (id)contentLabel;
- (id)moreLabel;
- (void)setContentLabel:;
- (void)setMoreLabel:;
@end
