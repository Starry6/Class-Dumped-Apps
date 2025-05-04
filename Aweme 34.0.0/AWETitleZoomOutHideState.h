@interface AWETitleZoomOutHideState : NSObject
@property (nonatomic) Q options;
@property (nonatomic) AWEPublishTitleInputController control;
@property (nonatomic) BOOL shouldHandleSuggestionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isJXPostPage;
- (BOOL)shouldHandleSuggestionView;
- (void)setShouldHandleSuggestionView:;
- (void)handleZoomIn:;
- (void)handleZoomOut:;
- (void)handleAdditionViewHide:;
- (void)handleAdditionViewShow:;
- (BOOL)isNewPreviewLayoutStyle;
- (void)handleNewVideoZoomOutNewPreviewLayoutVersion:;
- (void)handleNewVideoZoomOutOldVersion:;
- (void)handleNewVideoZoomOut:;
- (void)handleZoomOutNewPreviewLayoutVersion:;
- (void)handleZoomOutOldVersion:;
- (void)handleAdditionViewShowNewPreviewLayoutVersion:;
- (void)handleAdditionViewShowOldVersion:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)initWithController:;
- (id)control;
- (void)setControl:;
@end
