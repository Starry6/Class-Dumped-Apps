@interface AWEKnowledgeRichContentImpl.FullPageFeedBottomMenuItemViewModel : AWEKnowledgeRichContentImpl.FullPageFeedBaseItemViewModel
@property (nonatomic) double itemHeight;
- (void)commentCountDidAddWithNotification:;
- (void)commentCountDidDeleteWithNotification:;
- (void)commentCountDidChangeWithNotification:;
- (void)configWithSectionContext:model:;
- (void)dealloc;
- (void).cxx_destruct;
- (double)itemHeight;
@end
