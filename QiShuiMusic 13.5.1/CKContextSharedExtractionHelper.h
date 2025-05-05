@interface CKContextSharedExtractionHelper : NSObject
+ (BOOL)_isRelevantForExtractionWithView:;
+ (id)webPageNodeExtractionJavaScript;
+ (id)blocksFromText:;
+ (BOOL)textBlockLooksLikeAListWithText:;
+ (void)descendantsRelevantForContentExtractionFromView:intoArray:;
+ (id)bestContentStringForWebViewUIElements:andTitle:;
+ (id)bestImageForView:;
+ (BOOL)elementIsOnScreenWithView:window:;
@end
