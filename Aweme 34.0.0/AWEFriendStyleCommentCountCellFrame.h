@interface AWEFriendStyleCommentCountCellFrame : AWEFriendStyleCommentBaseCellFrame
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} labelFrame;
@property (nonatomic) NSString contentString;
@property (nonatomic) BOOL shouldShowMoreCommentEntrance;
- (void)calculateLayoutWithContainerWidth:;
- (BOOL)shouldShowMoreCommentEntrance;
- (void)setShouldShowMoreCommentEntrance:;
- (id)init;
- (void).cxx_destruct;
- (id)labelFrame;
- (double)cellHeight;
- (id)contentString;
- (void)setContentString:;
- (void)setLabelFrame:;
@end
