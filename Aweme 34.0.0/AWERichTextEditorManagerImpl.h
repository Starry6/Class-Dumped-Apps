@interface AWERichTextEditorManagerImpl : NSObject
@property (nonatomic) AWETranslationTransitionController nextTranslationDelegate;
@property (nonatomic) BOOL isCreatingRichTextEditor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentRichTextEditorViewControllerWithOriginalPublishModel:dismissBlock:params:;
- (void)enterToRichTextEditorViewControllerWithOriginalPublishModel:dismissBlock:params:shouldDispatchAfter:topViewController:;
- (void)presentRichTextToolbarPOIViewControllerWithOriginalPublishModel:params:poiIDDidChangeBlock:dismissBlock:;
- (id)selectedPoiIDWithPublishModel:;
- (void)configPublishModelPoiID:poiName:publishModel:;
- (void)publishVideo:;
- (id)nextTranslationDelegate;
- (void)transferToRichTextEditorWithWithOriginalPublishModel:transitioningDelegate:dismissBlock:params:shouldDispatchAfter:topViewController:;
- (void)transferToRichTextToolbarPOIViewControllerWithOriginalPublishModel:params:poiIDDidChangeBlock:didDismissBlock:;
- (BOOL)isCreatingRichTextEditor;
- (void)setIsCreatingRichTextEditor:;
- (void)showRichTextToolbarPOIViewControllerWithOriginalPublishModel:params:poiIDDidChangeBlock:didDismissBlock:sourceVC:;
- (void)setNextTranslationDelegate:;
- (void).cxx_destruct;
+ (void)handleCacheOriginTextKeepEditorDraftID;
+ (void)handleDraftError:;
+ (void)updatePublishModel:originalPublishModel:params:;
+ (void)createNewOriginalTextEditor:transitioningDelegate:originalPublishModel:dismissBlock:params:topViewController:;
+ (id)createRichPublishRepoModelWithOriginPublishViewModel:;
+ (id)hashTagsFromJsonString:;
+ (void)handleParamsParse:publishModel:;
@end
