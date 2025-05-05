@interface WBSTranslationWebpageContentExtractor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <WBSTranslationContentExtractionDelegate> extractionDelegate;
@property (nonatomic) <WBSTranslationContentFillingDelegate> fillingDelegate;
- (id)initWithWebView:;
- (void).cxx_destruct;
- (void)_webView:didFindTextManipulationItem:;
- (void)_webView:didFindTextManipulationItems:;
- (void)beginExtractingContent;
- (void)stopExtractingContent;
- (id)extractionDelegate;
- (void)setExtractionDelegate:;
- (void)replaceExtractedContent:withTranslatedContent:targetLocale:;
- (id)fillingDelegate;
- (void)setFillingDelegate:;
- (void)_scheduleReplaceItemsWithTargetLocale:;
- (void)_replaceItemsWithSignpostID:;
- (void)_updateHTMLLanguageAttributesIfNeeded:;
- (id)_textManipulationConfiguration;
@end
