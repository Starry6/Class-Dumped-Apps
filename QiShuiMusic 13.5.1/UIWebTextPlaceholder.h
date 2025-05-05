@interface UIWebTextPlaceholder : UITextPlaceholder
@property (nonatomic) DOMElement element;
- (id)element;
- (void)dealloc;
- (void)setElement:;
- (id)rects;
+ (id)placeholderWithWebDocumentView:;
@end
