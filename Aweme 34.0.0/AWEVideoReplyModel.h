@interface AWEVideoReplyModel : MTLModel
@property (nonatomic) NSNumber awemeID;
@property (nonatomic) NSNumber commentID;
@property (nonatomic) NSNumber aliasCommentID;
@property (nonatomic) NSNumber replyAwemeVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commentID;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setCommentID:;
- (id)aliasCommentID;
- (void)setAliasCommentID:;
- (id)replyAwemeVersion;
- (void)setReplyAwemeVersion:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
