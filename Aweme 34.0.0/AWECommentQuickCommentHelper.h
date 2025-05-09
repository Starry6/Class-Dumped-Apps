@interface AWECommentQuickCommentHelper : NSObject
@property (nonatomic) <AWECommentQuickCommentHelperDelegate> delegate;
@property (nonatomic) <AWECommentQuickCommentParentViewController> quickCommentParentViewController;
@property (nonatomic) AWECommentQuickCommentView quickCommentView;
@property (nonatomic) BOOL shouldShowQuickCommentView;
@property (nonatomic) BOOL displayingQuickCommentView;
@property (nonatomic) BOOL shouldShowQuickCommentForLuckyDraw;
@property (nonatomic) NSArray luckyWords;
@property (nonatomic) NSArray hotWords;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (id)hotWords;
- (void)onClickHotWordView:isInMiniEmoticonBar:;
- (BOOL)shouldShowQuickCommentForLuckyDraw;
- (void)setQuickCommentView:;
- (id)quickCommentView;
- (void)resetQuickCommentWords;
- (BOOL)displayingQuickCommentView;
- (void)setHotWords:;
- (BOOL)shouldShowQuickCommentView;
- (BOOL)shouldShowQuickCommentViewWithInputViewRised:;
- (id)quickCommentParentViewController;
- (void)setDisplayingQuickCommentView:;
- (void)dismissQuickCommentView;
- (BOOL)canReplyCommentWithModel:;
- (void)setShouldShowQuickCommentView:;
- (void)showQuickCommentViewWithInputViewRised:;
- (void)setQuickCommentParentViewController:;
- (void)setShouldShowQuickCommentForLuckyDraw:;
- (id)luckyWords;
- (void)setLuckyWords:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)constantWords;
+ (void)setConstantWords:;
+ (id)timedWords;
+ (void)setTimedWords:;
@end
