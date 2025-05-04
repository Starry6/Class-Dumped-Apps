@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPreloadModel : NSObject
@property (nonatomic) double commentButtonClickTime;
@property (nonatomic) BOOL isNeedPreload;
@property (nonatomic) BOOL isWaitingDelay;
@property (nonatomic) float preloadThreshold;
@property (nonatomic) BOOL preloadCommentsDiscarded;
@property (nonatomic) BOOL isHasCommentData;
@property (nonatomic) double entranceDidActivityStartTime;
- (double)commentButtonClickTime;
- (void)setCommentButtonClickTime:;
- (BOOL)isNeedPreload;
- (void)setIsNeedPreload:;
- (BOOL)isWaitingDelay;
- (void)setIsWaitingDelay:;
- (float)preloadThreshold;
- (void)setPreloadThreshold:;
- (BOOL)preloadCommentsDiscarded;
- (BOOL)isHasCommentData;
- (double)entranceDidActivityStartTime;
- (void)setEntranceDidActivityStartTime:;
- (void)preloadComments;
- (id)init;
- (void).cxx_destruct;
@end
