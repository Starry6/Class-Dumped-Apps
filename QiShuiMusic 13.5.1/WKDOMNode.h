@interface WKDOMNode : NSObject
@property (nonatomic) WKDOMDocument document;
@property (nonatomic) WKDOMNode parentNode;
@property (nonatomic) WKDOMNode firstChild;
@property (nonatomic) WKDOMNode lastChild;
@property (nonatomic) WKDOMNode previousSibling;
@property (nonatomic) WKDOMNode nextSibling;
@property (nonatomic) NSArray textRects;
- (void)dealloc;
- (id)document;
- (void).cxx_destruct;
- (id)_initWithImpl:;
- (id).cxx_construct;
- (id)previousSibling;
- (id)lastChild;
- (id)firstChild;
- (id)parentNode;
- (id)textRects;
- (void)removeChild:;
- (id)nextSibling;
- (void)appendChild:;
- (void)insertNode:before:;
- (id)_copyBundleNodeHandleRef;
@end
