@interface AWEFriendStyleAddCommentCellFrame : AWEFriendStyleCommentBaseCellFrame
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} iconFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} labelFrame;
- (void)setIconFrame:;
- (void)calculateLayoutWithContainerWidth:;
- (BOOL)canShowCommentInputView;
- (id)iconFrame;
- (id)init;
- (id)labelFrame;
- (double)cellHeight;
- (void)setLabelFrame:;
@end
