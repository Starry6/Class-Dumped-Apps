@interface AWEPlayInteractionChapterController : AWEPlayInteractionBaseController
@property (nonatomic) BOOL showFromSchema;
@property (nonatomic) BOOL playerDidReadyForDisplay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCurrentPlayedTime;
- (void)jumpToSelectedChapter:;
- (void)chapterCatalogPanelDidShowWithPanelHeightRate:;
- (void)chapterCatalogPanelWillDismiss;
- (void)chapterCatalogPanelDidDismiss;
- (void)chapterCatalogPanelDragOffset:panelHeightRate:;
- (void)onPlayerDidReadyForDisplay:;
- (void)showChapterPanelFromSchema;
- (BOOL)playerDidReadyForDisplay;
- (void)setPlayerDidReadyForDisplay:;
- (void)setShowFromSchema:;
- (void)showChapterPanelWithEnterMethod:;
- (BOOL)showFromSchema;
- (void)reset;
@end
