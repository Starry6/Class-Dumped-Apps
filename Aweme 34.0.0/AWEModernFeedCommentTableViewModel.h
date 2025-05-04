@interface AWEModernFeedCommentTableViewModel : NSObject
@property (nonatomic) AWEFriendStyleLikeUserCellFrame likeUserCellFrame;
@property (nonatomic) NSArray commentCellFrameArray;
@property (nonatomic) AWEFriendStyleCommentCountCellFrame commentCountCellFrame;
@property (nonatomic) AWEFriendStyleAddCommentCellFrame addCommentCellFrame;
- (id)likeUserCellFrame;
- (void)setLikeUserCellFrame:;
- (id)addCommentCellFrame;
- (void)setAddCommentCellFrame:;
- (id)commentCountCellFrame;
- (void)setCommentCountCellFrame:;
- (id)commentCellFrameArray;
- (void)setCommentCellFrameArray:;
- (id)init;
- (void).cxx_destruct;
@end
