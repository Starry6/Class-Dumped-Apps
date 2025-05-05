@interface CKContextContentProviderComponent : CKContextContentProvider
@property (nonatomic) UIView view;
- (id)init;
- (id)view;
- (void)extractUsingExecutor:withOptions:;
- (void).cxx_destruct;
- (void)setView:;
+ (double)_fontSizeOfView:usingExecutor:;
+ (BOOL)_isSensitiveTextContentType:;
+ (id)_bestVisibleStringForView:usingExecutor:;
+ (id)_handleWKWebView:withExecutor:;
+ (id)_getNotableSuperviewClassNamesForView:;
+ (void)_donateContentsOfParentView:usingExecutor:withOptions:;
+ (id)_decendantsRelevantForExtractionFromParentView:;
+ (void)_donateText:withTitle:debugText:debugUrlString:leadImage:snapshot:uiElements:usingContextFromExecutor:;
+ (id)_UIElementsForWebViewContentString:withSceneIdentifier:;
+ (void)_extractContentFromWebView:includingUIBoundingBox:withCompletionHandler:;
@end
