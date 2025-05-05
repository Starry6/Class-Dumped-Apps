@interface IESECRelationFeedCommentViewModel : NSObject
@property (nonatomic) NSArray comments;
@property (nonatomic) q rollingCommentIndex;
@property (nonatomic) NSString desc;
- (long long)rollingCommentIndex;
- (void)setRollingCommentIndex:;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
- (id)comments;
- (void)setComments:;
@end
