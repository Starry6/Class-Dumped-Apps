@interface AWECommentViewedCommentsManager : NSObject
@property (nonatomic) NSMutableSet viewedFirstCommentIDsForScene;
@property (nonatomic) NSMutableSet viewedSecondCommentIDsForScene;
@property (nonatomic) NSMutableDictionary viewedFirstCommentIDs;
@property (nonatomic) NSMutableDictionary viewedSecondCommentIDs;
- (id)generateViewedCommentCountParamsWithTargetSet:;
- (void)insertViewedFirstCommentIDs:atTarget:;
- (id)viewedSecondCommentIDsForScene;
- (id)viewedFirstCommentIDsForScene;
- (void)setViewedSecondCommentIDsForScene:;
- (void)setViewedFirstCommentIDsForScene:;
- (id)commentCategoryWithComment:;
- (id)viewedFirstCommentIDs;
- (void)setViewedFirstCommentIDs:;
- (id)viewedSecondCommentIDs;
- (void)setViewedSecondCommentIDs:;
- (id)init;
- (void).cxx_destruct;
+ (id)enumToString:;
@end
