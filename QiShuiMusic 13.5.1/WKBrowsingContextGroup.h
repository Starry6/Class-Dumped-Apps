@interface WKBrowsingContextGroup : NSObject
@property (nonatomic) ^{OpaqueWKPageGroup=} _pageGroupRef;
@property (nonatomic) BOOL allowsJavaScript;
@property (nonatomic) BOOL allowsPlugIns;
@property (nonatomic) BOOL privateBrowsingEnabled;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)_apiObject;
- (void)setPrivateBrowsingEnabled:;
- (id)initWithIdentifier:;
- (BOOL)allowsJavaScript;
- (void)setAllowsJavaScript:;
- (BOOL)allowsJavaScriptMarkup;
- (void)setAllowsJavaScriptMarkup:;
- (BOOL)allowsPlugIns;
- (void)setAllowsPlugIns:;
- (BOOL)privateBrowsingEnabled;
- (void)addUserStyleSheet:baseURL:includeMatchPatternStrings:excludeMatchPatternStrings:mainFrameOnly:;
- (void)removeAllUserStyleSheets;
- (void)addUserScript:baseURL:includeMatchPatternStrings:excludeMatchPatternStrings:injectionTime:mainFrameOnly:;
- (void)removeAllUserScripts;
- (id)_pageGroupRef;
@end
