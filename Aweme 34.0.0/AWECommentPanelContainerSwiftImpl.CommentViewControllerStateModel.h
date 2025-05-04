@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerStateModel : NSObject
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isCommentVCFullScreen;
@property (nonatomic) BOOL isCommentPanelInputViewFullscreen;
@property (nonatomic) BOOL isSkipCommentPanelLifecycle;
@property (nonatomic) BOOL isCommentImageBrowsing;
@property (nonatomic) BOOL isDismissingToFullScreen;
@property (nonatomic) BOOL isPictureChoosing;
- (BOOL)isCommentVCFullScreen;
- (BOOL)isSkipCommentPanelLifecycle;
- (BOOL)isCommentImageBrowsing;
- (BOOL)isCommentPanelInputViewFullscreen;
- (BOOL)isDismissingToFullScreen;
- (BOOL)isPictureChoosing;
- (void)setIsCommentVCFullScreen:;
- (void)setIsSkipCommentPanelLifecycle:;
- (void)setIsCommentImageBrowsing:;
- (id)init;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (void)setIsShowing:;
@end
