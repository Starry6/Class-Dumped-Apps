@interface WKDOMDocument : WKDOMNode
@property (nonatomic) WKDOMElement body;
- (id)body;
- (id)createElement:;
- (id)createTextNode:;
- (id)createDocumentFragmentWithMarkupString:baseURL:;
- (id)createDocumentFragmentWithText:;
- (id)parserYieldToken;
@end
