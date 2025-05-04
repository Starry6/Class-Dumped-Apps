@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPanelContainerSetting : NSObject
@property (nonatomic) BOOL useExternalCommentHeightRatio;
@property (nonatomic) double commentHeightRatio;
@property (nonatomic) Q commentPanelHeightScreenRatio;
@property (nonatomic) BOOL needBlackBackgroundMask;
@property (nonatomic) BOOL isViewingOnly;
- (BOOL)useExternalCommentHeightRatio;
- (double)commentHeightRatio;
- (void)setUseExternalCommentHeightRatio:;
- (void)setCommentHeightRatio:;
- (unsigned long long)commentPanelHeightScreenRatio;
- (void)setCommentPanelHeightScreenRatio:;
- (BOOL)needBlackBackgroundMask;
- (void)setNeedBlackBackgroundMask:;
- (BOOL)isViewingOnly;
- (void)setIsViewingOnly:;
- (void)resetCommentVCStatus:;
- (void)commentVCRefresh;
- (id)init;
- (void).cxx_destruct;
@end
