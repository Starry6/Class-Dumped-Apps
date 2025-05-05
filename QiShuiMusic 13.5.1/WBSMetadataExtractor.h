@interface WBSMetadataExtractor : NSObject
@property (nonatomic) WKWebProcessPlugInFrame webProcessPlugInFrame;
@property (nonatomic) JSContext context;
- (void)dealloc;
- (id)context;
- (id)faviconURLs;
- (id)appleTouchIconURLs;
- (void).cxx_destruct;
- (id)initWithWebProcessPlugInFrame:;
- (id)initWithWebProcessPlugInFrame:useNormalWorld:;
- (id)makeContext;
- (id)_resultForInvokingFunctionWithName:;
- (id)_colorFromColorComponents:;
- (void)getTemplateIconURL:andColor:;
- (id)firstElementForSelector:;
- (id)webProcessPlugInFrame;
+ (id)metadataExtractorScriptSource;
@end
