@interface MSASCommentChange : NSObject
@property (nonatomic) MSASComment comment;
@property (nonatomic) NSInteger deletionIndex;
@property (nonatomic) NSInteger type;
- (id)comment;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (void)setComment:;
- (int)deletionIndex;
- (void)setDeletionIndex:;
@end
