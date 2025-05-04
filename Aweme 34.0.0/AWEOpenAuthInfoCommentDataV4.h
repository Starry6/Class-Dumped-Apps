@interface AWEOpenAuthInfoCommentDataV4 : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString commentId;
@property (nonatomic) NSArray scopes;
@property (nonatomic) NSString comment;
@property (nonatomic) q showCommentStatus;
@property (nonatomic) NSString showCommentMessage;
- (void)setCommentId:;
- (id)commentId;
- (long long)showCommentStatus;
- (void)setShowCommentStatus:;
- (id)showCommentMessage;
- (void)setShowCommentMessage:;
- (id)scopes;
- (id)comment;
- (void)setScopes:;
- (void).cxx_destruct;
- (void)setComment:;
+ (id)JSONKeyPathsByPropertyKey;
@end
