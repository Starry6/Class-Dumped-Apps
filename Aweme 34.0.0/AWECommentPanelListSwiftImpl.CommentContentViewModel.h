@interface AWECommentPanelListSwiftImpl.CommentContentViewModel : NSObject
@property (nonatomic) BOOL isColorWhite;
@property (nonatomic) BOOL expanded;
- (BOOL)isColorWhite;
- (void)setIsColorWhite:;
- (id)buildIfNeeded;
- (id)richContent;
- (id)currentTextLayout;
- (id)finalContent;
- (id)init;
- (BOOL)expanded;
- (void)setExpanded:;
- (id)build;
- (void).cxx_destruct;
- (double)calculateHeight;
@end
