@interface WKDOMElement : WKDOMNode
@property (nonatomic) NSString tagName;
- (BOOL)hasAttribute:;
- (void)setAttribute:value:;
- (id)getAttribute:;
- (id)tagName;
@end
