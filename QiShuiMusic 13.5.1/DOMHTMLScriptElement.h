@interface DOMHTMLScriptElement : DOMHTMLElement
@property (nonatomic) NSString text;
@property (nonatomic) NSString htmlFor;
@property (nonatomic) NSString event;
@property (nonatomic) NSString charset;
@property (nonatomic) BOOL defer;
@property (nonatomic) NSString src;
@property (nonatomic) NSString type;
- (void)setEvent:;
- (id)event;
- (BOOL)defer;
- (void)setText:;
- (void)setType:;
- (id)nonce;
- (id)type;
- (BOOL)async;
- (id)text;
- (id)src;
- (void)setSrc:;
- (void)setNonce:;
- (void)setAsync:;
- (id)charset;
- (void)setCharset:;
- (id)crossOrigin;
- (void)setCrossOrigin:;
- (id)htmlFor;
- (void)setHtmlFor:;
- (void)setDefer:;
@end
