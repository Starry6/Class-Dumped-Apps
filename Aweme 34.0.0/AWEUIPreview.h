@interface AWEUIPreview : NSObject
- (id)previewForCommentCell;
- (id)previewForCommentFailedCell;
- (id)previewForCommentLoadMoreCell;
- (id)previewForCommentShowPanelCell;
- (id)collectPreviewDataFromConfigs;
- (id)collectPreviewConfigs;
- (id)transferConfigToModel:;
+ (id)getPreviewVC;
@end
