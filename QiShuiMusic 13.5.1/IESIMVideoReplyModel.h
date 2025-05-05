@interface IESIMVideoReplyModel : MTLModel
@property (nonatomic) NSNumber awemeID;
@property (nonatomic) NSNumber commentID;
@property (nonatomic) NSNumber aliasCommentID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeID;
- (id)aliasCommentID;
- (id)commentID;
- (void)setAliasCommentID:;
- (void)setAwemeID:;
- (void)setCommentID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
