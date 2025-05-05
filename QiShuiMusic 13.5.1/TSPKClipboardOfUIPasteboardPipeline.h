@interface TSPKClipboardOfUIPasteboardPipeline : TSPKDetectPipeline
- (BOOL)deferPreload;
+ (Class)pasteboardClass;
+ (BOOL)isGeneralPasteboardChangedWithName:pasteboardAPI:;
+ (long long)lastPasteboardChangeCount:;
+ (id)stubbedClass;
+ (id)stubbedInstanceAPIs;
+ (void)preload;
+ (id)dataType;
+ (id)cacheKey:;
+ (id)pipelineType;
@end
