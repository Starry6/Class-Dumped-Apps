@interface WKDOMRange : NSObject
@property (nonatomic) WKDOMNode startContainer;
@property (nonatomic) q startOffset;
@property (nonatomic) WKDOMNode endContainer;
@property (nonatomic) q endOffset;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL isCollapsed;
@property (nonatomic) NSArray textRects;
- (void)dealloc;
- (long long)endOffset;
- (BOOL)isCollapsed;
- (void).cxx_destruct;
- (long long)startOffset;
- (id)_initWithImpl:;
- (id)text;
- (id)initWithDocument:;
- (id).cxx_construct;
- (void)setStart:offset:;
- (id)startContainer;
- (void)selectNodeContents:;
- (void)setEnd:offset:;
- (id)textRects;
- (id)endContainer;
- (void)collapse:;
- (void)selectNode:;
- (id)rangeByExpandingToWordBoundaryByCharacters:inDirection:;
- (id)_copyBundleRangeHandleRef;
@end
