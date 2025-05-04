@interface AWEPostPageReeditPreviewHandlerV2 : AWEPostPagePreviewHandler
@property (nonatomic) AWEPostPageReeditPreviewServiceDependencies extraDependencies;
- (void)bindServices:;
- (void)configCoverAndFirstFrame;
- (void)chooseCoverActionWithChooseCoverPageWillShowBlock:chooseCoverPageWillDismissBlock:indexForCoverEdit:activeNLE:enterMethod:;
- (void)previewImageAtIndex:;
- (void)setExtraDependencies:;
- (id)extraDependencies;
- (BOOL)isNoCompileResourceIdsForSharePost;
- (void)superChooseCoverActionWithChooseCoverPageWillShowBlock:chooseCoverPageWillDismissBlock:;
- (void).cxx_destruct;
@end
